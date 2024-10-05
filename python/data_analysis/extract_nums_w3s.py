import re

txt = r"That will be 59:59:59 dollars"

# Find all digit characters:


x = re.search("\d+", txt)
x = x.start()
print(x)
