# -*- coding: utf-8 -*-
         
import math
import random
ss=0
#print(ss)
time=int(input())
def distance(a,b):
    temp=abs(a-b)
    return temp*temp
def rd(x1,x2,y1,y2):
    rd=math.sqrt(distance(x1,x2)+distance(y1,y2))
    #print("x1(%f,%f)" %(x1,y1))
    if rd>math.sqrt(12):
        print ("x1(%f,%f) x2(%f,%f)   ∨"%(x1,y1,x2,y2))
        return 0
    else:
        print ("x1(%f,%f) x2(%f,%f)"%(x1,y1,x2,y2))
        return 1
for n in range (1,time,1):
    ax=random.uniform(-2,2)
    bx=random.uniform(-2,2)
    ay=float(math.sqrt(4-ax*ax))
    by=float(math.sqrt(4-bx*bx))
    if random.randint(1,2)==2:
        ay=-ay
    if random.randint(1,2)==1:
        by=-by
    ss+=float(rd(ax,bx,ay,by))
print("P=",ss/time)
