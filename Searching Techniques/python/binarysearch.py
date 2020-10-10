def binarysearch(ar,term):
    l=0
    r=len(ar)-1
    while(l<=r):
        mid=(l+r)//2
        if ar[mid]==term:
            return mid
        elif ar[mid]>term:
            r=mid-1
        else:
            l=mid+1
    return -1
n=int(input("Enter number of elements: "))
ar=list(map(int,input("Enter elements: ").split()))
term=int(input("Enter element to search for"))
found=binarysearch(ar,term)
if found!=-1:
    print("Element found")
else:
    print("Element not found")