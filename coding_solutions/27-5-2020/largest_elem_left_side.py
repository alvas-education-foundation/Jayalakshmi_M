//Given an array arr[] of the positive integers of size N, the task is to find the largest element on the left side of each index which is smaller than the element present at that index.

Note: If no such element is found then print -1.//


def findMaximumBefore(arr, n): 
  
    # Loop to iterate over every 
    # element of the array 
    for i in range(n): 
  
        currAns = -1
  
        # Loop to find the maximum smallest 
        # number before the element arr[i] 
        for j in range(i-1,-1,-1): 
            if (arr[j] > currAns and
                arr[j] < arr[i]): 
                currAns = arr[j] 
  
        print(currAns,end=" ")


arr=[]
n = int(input("Enter number of elements : "))
print("enter your array")
for i in range(0, n):
    ele = int(input())
    arr.append(ele)

findMaximumBefore(arr, n)