#python program to return a list cotaining first and last element using list slicing method

test_list = []
n=int(input())
for i in range(0,n):
    ele=int(input())
    test_list.append(ele)
  
# printing original list  
print ("The original list is : " +  str(test_list)) 
  
# using List slicing 
# to get first and last element of list 
res = test_list[::len(test_list)-1]  
  
# printing result 
print ("The first and last element of list are : " +  str(res)) 