function collision_SFunction(block)
    setup(block)
end

function setup(block)

    block.numInputPorts = 2;
    block.numOutputPorts = 1;


    block.SetPreCompInpPortInfoToDynamic;
    block.SetPreCompOutPortInfoToDynamic;

    %uotput config
    block.OutputPort(1).Dimensions          = 20;
    block.OutputPort(1).DatatypeID          = 0;
    block.OutputPort(1).SamplingMode        = 'sample';
    
    %sinergy
    block.InputPort(1).Dimensions          = 20;
    block.InputPort(1).DatatypeID          = 0;
    block.InputPort(1).SamplingMode        = 'sample';
    
    %reload ball
    block.InputPort(2).Dimensions          = 1;
    block.InputPort(2).DatatypeID          = 0;
    block.InputPort(2).SamplingMode        = 'sample';
    
    block.SampleTimes = [-1 0];
    
    block.RegBlockMethod('Start',               @Start);
    block.RegBlockMethod('Outputs',             @Output); 
end

function Output(block)
    global UBHandG;
    global ballG;
    global lowTri;
    [~,collisionInfo,~]= UBHandG.checkCollision(block.InputPort(1).Data , {ballG}, 'IgnoreSelfCollision', 'on', 'Exhaustive', 'on');
    collisionInfo = collisionInfo([collisionInfo==Inf]==0);
    collisionInfo = double(isnan(collisionInfo(1:20)));
    blocked = [lowTri(max([find(collisionInfo(1:4)==1); 0])+1,2:5)'; 
        lowTri(max([find(collisionInfo(5:8)==1); 0])+1,2:5)';
        lowTri(max([find(collisionInfo(9:12)==1); 0])+1,2:5)';
        lowTri(max([find(collisionInfo(13:16)==1); 0])+1,2:5)';
        lowTri(max([find(collisionInfo(17:20)==1); 0])+1,2:5)';
    ];
    block.OutputPort(1).Data = blocked;
    if (block.InputPort(2).Data >0)
        load('UBHand_values.mat', 'ball');
        ballG = ball;
        set_param('final_simulink_model_V3/reload ball constant','Value','0');
    end
end

function Start(block)
    load('UBHand_values.mat', 'UBHand', 'ball');
    global UBHandG;
    global ballG;
    global lowTri;
    lowTri = tril(ones(5));
    UBHandG = UBHand;
    ballG = ball;
end

function out = maxI(fun)
    [~,out] = fun();
end