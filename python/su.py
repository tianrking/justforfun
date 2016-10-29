#!/usr/bin/python
print "number"
n=int(raw_input())
def sushu(b):
    if b==1:
	return True
    if b==2:
        return True
    i=2
    while i<b:
	if b%i==0:
	    return False
        i+=1
    return True
b=filter(sushu,range(1,n))
print b
c=b
print "find it? Let's start ! Q to exit" 
g=raw_input()
while g!='Q':
    g=int(g)
    print c[g]
    g=raw_input()
