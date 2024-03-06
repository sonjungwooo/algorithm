import sys

def merge(arr,s,mid,e):
    i=s
    j=mid+1
    k=s
    tmp = arr[:]
    while i<=mid and j<=e:
        if arr[i]<arr[j] :
            tmp[k] =arr[i]
            k+=1
            i+=1
        else :
            tmp[k] =arr[j]
            k+=1
            j+=1
    m = (i if i<=mid else j)
    for i in range(k,e+1):
        tmp[i] = arr[m]
        m+=1
    for i in range(s,e+1):
        arr[i] =tmp[i]
        
    
def mergesort(arr,s,e,step) :
    mid = (s+e)//2
    if s<e: 
        mergesort(arr,s,mid,step*2)
        mergesort(arr,mid+1,e,step*2)
        if step >= k:
            merge(arr,s,mid,e)
        else :
            return 
        
        if step == k :
            for i in range(s,e+1):
                print(arr[i], end=" ")
        
        
input = sys.stdin.readline        
n= int(input())
arr = list(map(int, input().split()))
k = int(input())
mergesort(arr,0,n-1,1)
