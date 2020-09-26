n = int(input())
arr = [1, 1, 2]

for i in range(3,n+1):
  arr.append((arr[i-1]+arr[i-2]+arr[i-3])% 1000000007)

print(arr[n])
