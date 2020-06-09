'''
#Python Program to count even and odd numbers 


#Write a Python program to count the number of even and odd numbers from a series of numbers.
#Numbers are = (1, 2, 3, 4, 5, 6, 7, 8, 9)
#Output:
#Number of even numbers : 5
#Number of odd numbers : 4
'''


s=list(map(int,input().split()))
count=0
cn=0
for i in s:
    if(i%2==0):
        count=count+1
    else:
        cn=cn+1
print("Number of even numbers : ",count)
print("Number of odd numbers : ",cn)