year = int(input())
if (year % 400 != 0) and (year % 4 == 0):
    print("Yes")
else:
    print("No")