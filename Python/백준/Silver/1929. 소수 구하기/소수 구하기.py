start, end = map(int, input().split())

for prime in range(start, end+1):
  if prime == 1:
    continue
  for i in range(2, int(prime**0.5)+1):
    if prime % i == 0:
      break
  else:
    print(prime)
  