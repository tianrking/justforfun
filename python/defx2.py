def power(x, n=2),
    s = 1
    while n > 0:
        n = n - 1
        s = s * x
    return s
print "a__\b\b"
a=int(raw_input())
print "b__\b\b"
b=int(raw_input())
print power(a,b)
