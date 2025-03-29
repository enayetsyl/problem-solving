n = input()

reversed_n = n[::-1]
reversed_n = reversed_n.lstrip("0")
print(reversed_n)
if n == n[::-1]:
  print("YES")
else:
  print("NO")