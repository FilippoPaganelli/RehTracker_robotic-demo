
clear device;

device = ble("021E7DE0C1CB");

%

% ch_type = characteristic(device, "0CCC7966-1399-4C67-9EDE-9B05DBEA1BA2", "B964A50A-0002-4D37-97EB-971BF5233A98");
ch_data = characteristic(device, "0CCC7966-1399-4C67-9EDE-9B05DBEA1BA2","B964A50A-0001-4D37-97EB-971BF5233A98" );
ch_robot = characteristic(device, "0CCC7966-1399-4C67-9EDE-9B05DBEA1BA2", "B964A50A-0003-4D37-97EB-971BF5233A98");

%

is_robot = 1;
write(ch_robot, is_robot);

%

ch_data.DataAvailableFcn = @readBleDataCallback;
