h,m=map(int,input().split())
angle = 0.5*(60*h-11*m)
if angle > 180:
    angle = 360 - angle
print(f'{angle:.7f}')