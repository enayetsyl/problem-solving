
from collections import Counter

# Read input
n = int(input())
a = list(map(int, input().split()))

# Count frequency of each number
freq = Counter(a)

# Variable to store the total elements to remove
to_remove = 0

# Process each unique number
for num, count in freq.items():
    if count == num:
        continue  # already good
    elif count > num:
        to_remove += count - num  # remove extras
    else:
        to_remove += count  

# Output result
print(to_remove)
