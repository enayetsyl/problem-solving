balance =0
count =0
start = 0
result =[]

S = input()

for i in range(len(S)):
  if S[i] == 'R':
    balance += 1
  else:
    balance -= 1
  
  if balance == 0:
    result.append(S[start:i+1])
    count += 1
    start = i+1

print (count)
for substr in result:
  print(substr)