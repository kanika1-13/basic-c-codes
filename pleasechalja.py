import requests

def upload_sensor_data_to_thingspeak(channel_id, write_key, file_path):
    # Read the text file and extract the sensor data
    with open(file_path, 'r') as file:
        file_content = file.readlines()
        gas_data = []
        flame_data = []

        for line in file_content:
            line = line.strip()
            values = line.split("\t")

            if len(values) > 1:
                sensor_values = values[1].split(",")

                if len(sensor_values) > 1:
                    gas_value = float(sensor_values[0].strip()) if sensor_values[0].strip() else 0.0
                    flame_value = float(sensor_values[1].strip()) if sensor_values[1].strip() else 0.0
                    gas_data.append(gas_value)
                    flame_data.append(flame_value)
                else:
                    gas_value = float(sensor_values[0].strip()) if sensor_values[0].strip() else 0.0
                    flame_data.append(0.0)  # or any other appropriate default value
                    gas_data.append(gas_value)

    # Create the payload for ThingSpeak
    payload = {'api_key': write_key}
    payload['field1'] = ','.join(str(value) for value in gas_data)
    payload['field2'] = ','.join(str(value) for value in flame_data)

    # Send the POST request to ThingSpeak
    response = requests.post(f'https://api.thingspeak.com/update.json?api_key={write_key}', data=payload)

    if response.status_code == 200:
        print(f"Sensor data from {file_path} uploaded to ThingSpeak channel {channel_id}.")
    else:
        print(f"Failed to upload sensor data from {file_path} to ThingSpeak. Status code: {response.status_code}.")

# Usage example
channel_id = '2131383'
write_key = '6P5BO7GY2M6UCGHM'
file_path = r'C:\Users\KIIT\Desktop\CoolTerm Capture 2023-06-09 12-36-13.txt'

upload_sensor_data_to_thingspeak(channel_id, write_key, file_path)
