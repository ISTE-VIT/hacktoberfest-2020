def abs(a):
    return a if a>0 else a*-1

def GCD(a,b):
    if a == 0:
        return b
    elif b == 0:
        return a
    elif a%b == 0:
        return b
    else:
        return GCD(b,a%b)

a,b = list(map(int, input("Enter Input : ").split()))
#a,b = list(map(int, "12 18".split()))
if a!=0 or b!=0:
    if a == 0:
        print("The gcd of",max(a,b) ,"and",min(a,b) ,"is :",abs(GCD(a,b)))
    elif b == 0:
        print("The gcd of",max(a,b) ,"and",min(a,b) ,"is :",abs(GCD(a,b)))
    elif abs(a) > abs(b):
        print("The gcd of", a ,"and",b ,"is :",abs(GCD(a,b)))
    else:
        print("The gcd of", b ,"and",a ,"is :",abs(GCD(a,b)))
else:
    print("Error! must be not all zero.")
