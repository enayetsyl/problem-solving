n = input()

a, b = map(int, n.split())

found = False

for num in range(a, b+1):
  num_str = str(num)
  is_lucky = True

  for ch in num_str:
    if ch != "4" and ch != "7":
      is_lucky = False
      break
  if is_lucky:
    print(num, end=" ")
    found = True

if not found:
  print(-1)

  