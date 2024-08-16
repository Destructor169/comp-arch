import pandas as pd

# Data
methods = ["Recursive", "Loop", "Recursive with Memoization", "Loop with Memoization"]
execution_times = [164.203, 4.869e-05, 6.042e-05, 5.597e-05]
speedup = [1, 164.203 / 4.869e-05, 164.203 / 6.042e-05, 164.203 / 5.597e-05]

# Create DataFrame
df = pd.DataFrame({
    "Method": methods,
    "Execution Time (seconds)": execution_times,
    "Speedup Compared to Recursive Method": speedup
})

# Display the table
print(df)
