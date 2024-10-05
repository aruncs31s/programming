import json as jsonify

some_id = 1
some_name = "Name"
some_dict = {some_id: {"name": some_name}}
print(some_dict)
print(jsonify.dumps(some_dict))
"""
{1: {'name': 'Name'}}
{"1": {"name": "Name"}}
"""
