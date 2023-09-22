robotWorld = vrworld('robot_sim.x3d');
open(robotWorld);

nodeList = nodes(robotWorld);
for i = 1:numel(nodeList)
if strcmp(get(nodeList(i),'Name'),'Robot_Parent')
    delete(nodeList(i));
end
end


load('UBHand_values.mat');
parent = vrnode(robotWorld, 'Robot_Parent', 'Transform');

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%base creation
base = vrnode(parent, 'children', 'base','Transform');
addShape(base,scale);
length = 1;
ratio = 1;
deformation = ratio*scale*[1 1 1];
TX = pi/2;
TZ = 0;
rotationZ = [cos(TZ) -sin(TZ) 0; sin(TZ) cos(TZ) 0;0 0 1];
rotationX = [1 0 0; 0 cos(TX) -sin(TX); 0 sin(TX) cos(TX)];
rotation = rotm2axang(rotationX*rotationZ);
meshNode = vrimport(base,'palm.stl');
setfield(meshNode, 'scale', deformation, 'rotation', rotation);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%robotic model creation
for i = 1:5
    for j = 1:5
        n = i*5+j-5;
        body = UBHand.Bodies{n};
        if j == 1
            parent = UBHand.Base;
            parentNode = base;
        else
            parent = UBHand.Bodies{n-1};
            if j==2
                parentNode = getfield(parentNode,'children'); parentNode = parentNode(i+2);
            else
                parentNode = getfield(parentNode,'children'); parentNode = parentNode(2);
            end
        end
        tform = getTransform(UBHand, homeConfiguration(UBHand), body.Name, parent.Name);
        rotation = rotm2axang(tform(1:3,1:3));
        tvector = tform*[0 0 0 1]'; tvector = tvector(1:3)';
        node = vrnode(parentNode, 'children', strcat('body',num2str(n)),'Transform');
        setfield (node, 'rotation', rotation , 'translation', tvector);
        addShape(node,scale);
        if j>1
            addMesh(node, parentNode, tvector, scale);
        end
        
    end
end

% save(robotWorld, 'robot_sim.x3d');
% reload(robotWorld);
% close(robotWorld);


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% debugging shape
function addShape(parentNode, scale)
node = vrnode(parentNode, 'children', 'Axis','Shape');
%box = vrnode(node, 'geometry', 'Box', 'Box');
%setfield(box,'size', scale*[10 2 40]);
end

function addMesh(node, parentNode, tvec, scale)
    rotation = rotm2axang(vrrotvec2mat(vrrotvec([0 0 1],tvec)));
    length = sqrt(sum(tvec.^2));
    ratio = 0.0025;
    deformation = ratio*[scale*40 scale*40 length];
    meshNode = vrimport(parentNode,'phalanx.stl');
    setfield(meshNode, 'scale', deformation, 'rotation', rotation);
end
