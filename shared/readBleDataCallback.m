function readBleDataCallback(src, arg)
    raw_data = read(src,'oldest');

    data = double(raw_data(1)/100);

    assignin("base", "data", data);
    
    set_param("final_simulink_model_V3/EMG Value", "Value", "data");
end