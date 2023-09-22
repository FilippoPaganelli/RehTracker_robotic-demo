function changeCollisionObj_F(inputParameters, shape, position, rotation)

load('UBHand_values.mat', 'UBHand', 'sinergy_1st');

switch shape
    case 0 %sphere
        ball = collisionSphere(inputParameters(1));
    case 1 %box
        ball = collisionBox(inputParameters(1),inputParameters(2),inputParameters(3));
    case 2 %cylinder
        ball = collisionCylinder(inputParameters(1),inputParameters(2));
end

ball.Pose = [ axang2rotm(rotation) position' ; 0 0 0 1 ];


save('UBHand_values.mat', 'ball', '-append');

robotWorld = vrworld('robot_sim.x3d');
open(robotWorld);

nodeList = nodes(robotWorld);
for i = 1:numel(nodeList)
if strcmp(get(nodeList(i),'Name'),'Ball')
    delete(nodeList(i));
end
end



ballNode = vrnode(robotWorld, 'Ball', 'Transform');
setfield(ballNode, 'translation', position, 'rotation', rotation);
ballShape = vrnode(ballNode,'children', 'BallShape', 'Shape');
switch shape
    case 0 %sphere
        ballGeom = vrnode(ballShape,'geometry', 'BallShape', 'Sphere');
        setfield(ballGeom, 'radius', inputParameters(1));
    case 1 %box
        ballGeom = vrnode(ballShape,'geometry', 'BallShape', 'Box');
        setfield(ballGeom, 'size', inputParameters(1:3));
    case 2 %cylinder
        ballGeom = vrnode(ballShape,'geometry', 'BallShape', 'Cylinder');
        setfield(ballGeom, 'radius', inputParameters(1), 'height', inputParameters(2));
end
ballAppearance = vrnode(ballShape,'appearance', 'ballAppearance', 'Appearance');
ballMaterial = vrnode(ballAppearance,'material', 'BallMaterial', 'Material');
setfield(ballMaterial, 'diffuseColor', [1 0.6 0]);

save(robotWorld, 'robot_sim.x3d');
reload(robotWorld);
close(robotWorld);
end