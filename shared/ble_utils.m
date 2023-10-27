% clear workspace from previously connected devices
clear device;

% connect to physical prototype via device ID
device = ble("021E7DE0C1CB");

% define BLE characteristics
ch_data = characteristic(device, "0CCC7966-1399-4C67-9EDE-9B05DBEA1BA2","B964A50A-0001-4D37-97EB-971BF5233A98" );
ch_robot = characteristic(device, "0CCC7966-1399-4C67-9EDE-9B05DBEA1BA2", "B964A50A-0003-4D37-97EB-971BF5233A98");

% write to physical prototype to switch to robotics demo mode
is_robot = 1;
write(ch_robot, is_robot);

% assign custom callback to handle the notified data from the Arduino
ch_data.DataAvailableFcn = @readBleDataCallback;
