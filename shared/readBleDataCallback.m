% data callback definition

function readBleDataCallback(src, arg)
    % reading raw data
    raw_data = read(src,'oldest');

    % converting raw data to a double in [0,1]
    data = double(raw_data(1)/100);

    % assign converted data to the base workspace
    assignin("base", "data", data);
    
    % set the new data value as input to the Simulink model
    set_param("final_simulink_model_V3/EMG Value", "Value", "data");
end