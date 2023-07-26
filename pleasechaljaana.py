import requests
def upload_numeric_data_to_thingspeak(channel_id, write_key, file_path):
    # Read the text file and extract the numeric data
    with open(file_path, 'r') as file:
        file_content = file.readlines()
        numeric_data = []

        for line in file_content:
            line = line.strip()
            numeric_value = line.split(",")[0]
            numeric_data.append(float(numeric_value))

    # Create a single payload key with concatenated values
    payload = {'api_key': write_key}
    payload['field1'] = ','.join(str(value) for value in numeric_data)
    print(f"Values being sent to field1: {payload['field1']}")  # Print the values
# Send the POST request to ThingSpeak
    response = requests.post(f'https://api.thingspeak.com/update.json?api_key={write_key}', data=payload)

    if response.status_code == 200:
        print(f"Numeric data from {file_path} uploaded to ThingSpeak channel {channel_id}.")
    else:
        print(f"Failed to upload numeric data from {file_path} to ThingSpeak. Status code: {response.status_code}.")
# Usage example
channel_id = '2131383'
write_key = '6P5BO7GY2M6UCGHM'
file_path = r'c:\Users\KIIT\Desktop\CoolTerm Capture 2023-06-26 12-18-41.txt'

upload_numeric_data_to_thingspeak(channel_id, write_key, file_path)
