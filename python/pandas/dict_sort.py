import pandas as pd

sample_data = {"day1": 10, "day2": 300, "day3": 22}

_2024 = {"day1": 10, "day2": 300, "day3": 22}
print(pd.Series(sample_data).sort_values(ascending=True))
