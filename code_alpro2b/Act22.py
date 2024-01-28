import json

json_data = {
    "profiles": [
        {
            "name": "Rizqi Fathurrohman",
            "phone_number": "3985395873958",
            "email": ["fathurrr@mail.com"],
            "region": "North Bekasi",
            "is_robot": "False"
        },
        {
            "name": "Cecep",
            "phone_number": "3248294892029",
            "email": ["cecepganss@mail.com", "cecepott@mail.com"],
            "region": "Mars",
            "is_robot": "False"
        }
    ]
}

read_json = json.dumps(json_data, indent=3)

print(read_json)