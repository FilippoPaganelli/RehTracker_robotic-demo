function sinergy2vr_SFunction(block)
    setup(block)
end

function setup(block)
    WorldSetup

    block.numInputPorts = 2;
    block.numOutputPorts =1;


    block.SetPreCompInpPortInfoToDynamic;
    block.SetPreCompOutPortInfoToDynamic;

    %configuration of rotation ax-angle vector to send to the vr
    block.OutputPort(1).Dimensions          = [80 1];
    block.OutputPort(1).DatatypeID          = 0;
    block.OutputPort(1).SamplingMode        = 'sample';
    
    %configuration of rotation ax-angle vector recived from vr
    block.InputPort(1).Dimensions           = [80 1];
    block.InputPort(1).DatatypeID          = 0;
    block.InputPort(1).SamplingMode        = 'sample';
    
    %configuration from sinergy already with collision
    block.InputPort(2).Dimensions           = 20;
    block.InputPort(2).DatatypeID          = 0;
    block.InputPort(2).SamplingMode        = 'sample';
    
    block.SampleTimes = [-1 0];
    
    block.RegBlockMethod('Start',               @Start);
    block.RegBlockMethod('Outputs',             @Output); 
    block.RegBlockMethod('Terminate',           @End);
    block.RegBlockMethod('Update',              @Update);
    block.RegBlockMethod('PostPropagationSetup',@SetPostPropagation);
    

    
end

function Output(block)
    currentAxAng = reshape(block.InputPort(1).Data, 4, [])';

    computedAxAng = zeros(size(currentAxAng));
    for i = 1:size(currentAxAng,1)
        zVec = [0 0 1];
        currentRot = axang2rotm(currentAxAng(i,:));
        jointRot = axang2rotm([zVec block.Dwork(1).Data(i)]);
        desiredJointRot = axang2rotm([zVec block.InputPort(2).Data(i)]);
        
        computedAxAng(i,:) = rotm2axang(currentRot*jointRot'*desiredJointRot);
    end
    
    block.OutputPort(1).Data = reshape(computedAxAng', [], 1);
end

function SetPostPropagation(block)
    %% Setup Dwork
    block.NumDworks = 1;
    block.Dwork(1).Name = 'x0'; 
    block.Dwork(1).Dimensions      = 20;
    block.Dwork(1).DatatypeID      = 0;
    block.Dwork(1).Complexity      = 'Real';
    block.Dwork(1).UsedAsDiscState = true;
    
end

function Update(block)
    block.Dwork(1).Data = block.InputPort(2).Data;
end

function Start(block)
    block.Dwork(1).Data = zeros(20,1);
end

function End(block)
    global ArduinoUno;
    ArduinoUno = [];
end
