import json

some_data = {"Food Count": 2, "Drink Count": 3}
print(json.dumps(some_data))  # to convert python dictionaries to json format
print(str(some_data))  # Kinda does the same
"""out
{"Food Count": 2, "Drink Count": 3}
{'Food Count': 2, 'Drink Count': 3}
But it is single quotes insted of double quotes
"""

another_example = {1: 2, 2: 3, 3: 4}
print(another_example)
print(json.dumps(another_example))
print(str(another_example))
"""
{1: 2, 2: 3, 3: 4}
{"1": 2, "2": 3, "3": 4}
{1: 2, 2: 3, 3: 4}
"""
