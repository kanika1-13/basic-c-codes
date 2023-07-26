import requests

def upload_sensor_data_to_thingspeak(channel_id, write_key, gas_value, flame_value):
    # Create payload with gas and flame values
    payload = {'api_key': write_key}
    payload['field1'] = str(gas_value)
    payload['field2'] = str(flame_value)

    # Send the POST request to ThingSpeak
    response = requests.post(f'https://api.thingspeak.com/update.json?api_key={write_key}', data=payload)

    if response.status_code == 200:
        print(f"Sensor data uploaded to ThingSpeak channel {channel_id}.")
    else:
        print(f"Failed to upload sensor data to ThingSpeak. Status code: {response.status_code}.")

def read_sensor_data_from_file(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()  # Read all lines from the file

    for line in lines:
        # Split the line into timestamp, gas, and flame values
        values = line.strip().split('\t')

        # Check if the line has all three values
        if len(values) == 2:
            timestamp, gas_flame_values = values[0], values[1].split(',')
            gas_value = float(gas_flame_values[0])
            flame_value = float(gas_flame_values[1])
            return gas_value, flame_value

    print("Invalid sensor data format in the file.")
    return None, None

# ThingSpeak channel details
channel_id = '2131383'
write_key = '6P5BO7GY2M6UCGHM'

# File path for sensor data
file_path = r'C:\Users\KIIT\Desktop\CoolTerm Capture 2023-06-12 12-17-00.txt'

# Read sensor data from file
gas_data, flame_data = read_sensor_data_from_file(file_path)

# Upload data to ThingSpeak
if gas_data is not None and flame_data is not None:
    upload_sensor_data_to_thingspeak(channel_id, write_key, gas_data, flame_data)



