def filt(c):
    return c%2==1
print "n"
n=int(raw_input())
print "m"
m=int(raw_input())
print "p"
p=int(raw_input())
b=range
c=filter(filt,b(n,m,p))
print c
d=map(str,c)
print d

