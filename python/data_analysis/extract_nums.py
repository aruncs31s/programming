import re

test_data = "Some text with 222 Number"
numbers = re.findall("d+", test_data)
print(numbers)
