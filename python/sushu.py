print "number"
number=int(raw_input())
def sushu(number):
    wc=range(1,number)
    n=0
    for b in wc:
	for s in range(2,number-1):
            if b%s!=0:
	        s=s+1
		n=b%s+n
		
	return =0
c=filter(sushu,range(1,number))
print c
	
    
