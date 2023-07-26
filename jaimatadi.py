import random
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

def generate_random_data():
    gas_value = random.uniform(100, 200)  # Generate a random gas value between 100 and 200
    flame_value = random.choice([0, 1])  # Generate a random flame value of either 0 or 1
    return gas_value, flame_value

# ThingSpeak channel details
channel_id = '2131383'
write_key = '6P5BO7GY2M6UCGHM'

# Generate random data
gas_data, flame_data = generate_random_data()

# Upload data to ThingSpeak
upload_sensor_data_to_thingspeak(channel_id, write_key, gas_data, flame_data)

