def linearsearch(ar,term):
    for i in range(len(ar)):
        if ar[i]==term:
            return i
    return -1
n=int(input("Enter number of elements: "))
ar=list(map(int,input("Enter elements: ").split()))
term=int(input("Enter element to search for"))
found=linearsearch(ar,term)
if found!=-1:
    print("Element found at index = ",found)
else:
    print("Element not found")