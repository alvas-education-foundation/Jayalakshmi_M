'''
Description:
Write a python function that will take a string and checks whether it is a palindrome or not. Return If it a palindrome, print true else print false
'''



# Driver code 
s = input()
rev = ''.join(reversed(s)) 
  
    # Checking if both string are  
    # equal or not 
if (s == rev): 
    print("True")
else:
    print("false")