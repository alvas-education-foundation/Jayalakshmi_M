
import math
def isprimebad(n):
    if (n==1):
        return False
    elif (n==2):
        return True;
    else:
        for i in range(2,int(math.sqrt(n))):
            if(n % i==0):
                return False
        return True
    
    
    
for i in range(1,50):
    print(i,'==>', isprimebad (i))
       


ouyput:
1 ==> False                                                                                                                                     
2 ==> True                                                                                                                                      
3 ==> True                                                                                                                                      
4 ==> True                                                                                                                                      
5 ==> True                                                                                                                                      
6 ==> True                                                                                                                                      
7 ==> True                                                                                                                                      
8 ==> True                                                                                                                                      
9 ==> True                                                                                                                                      
10 ==> False                                                                                                                                    
11 ==> True                                                                                                                                     
12 ==> False                                                                                                                                    
13 ==> True                                                                                                                                     
14 ==> False                                                                                                                                    
15 ==> True                                                                                                                                     
16 ==> False                                                                                                                                    
17 ==> True                                                                                                                                     
18 ==> False                                                                                                                                    
19 ==> True                                                                                                                                     
20 ==> False                                                                                                                                    
21 ==> False                                                                                                                                    
22 ==> False                                                                                                                                    
23 ==> True                                                                                                                                     
24 ==> False                                                                                                                                    
25 ==> True                                                                                                                                     
26 ==> False                                                                                                                                    
27 ==> False                                                                                                                                    
28 ==> False   
29 ==> True                                                                                                                                     
30 ==> False                                                                                                                                    
31 ==> True                                                                                                                                     
32 ==> False                                                                                                                                    
33 ==> False                                                                                                                                    
34 ==> False                                                                                                                                    
35 ==> True                                                                                                                                     
36 ==> False                                                                                                                                    
37 ==> True                                                                                                                                     
38 ==> False                                                                                                                                    
39 ==> False                                                                                                                                    
40 ==> False                                                                                                                                    
41 ==> True                                                                                                                                     
42 ==> False                                                                                                                                    
43 ==> True                                                                                                                                     
44 ==> False                                                                                                                                    
45 ==> False                                                                                                                                    
46 ==> False                                                                                                                                    
47 ==> True                                                                                                                                     
48 ==> False                                                                                                                                    
49 ==> True  