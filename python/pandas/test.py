import pandas as pd

test_data = [-73, -75, -75, -75, -75, -75, -75, -75, -75, -75, -75, -75, -75, -75, -75]
df = pd.read_csv("data.csv")
#
# series_df = pd.Series(test_data)
#
# print(series_df)
#
a = [1, 3, 4]
print(pd.Series(a, index=["x", "y", "z"]))

# print(df.to_string())
