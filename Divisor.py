a=int(input())
count=0
for i in range(1, a+1):
  if a%i==0:
    count+=1
    print(i)
