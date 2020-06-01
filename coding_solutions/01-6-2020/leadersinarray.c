//Given an array of positive integers. Write a C program to find the leaders in the array

#include <stdio.h>
  
/*C++ Function to print leaders in an array */
void printLeaders(int arr[], int size) 
{ 
    for (int i = 0; i < size; i++) 
    { 
        int j; 
        for (j = i+1; j < size; j++) 
        { 
            if (arr[i] <= arr[j]) 
                break; 
        }     
        if (j == size) // the loop didn't break 
            printf("%d  ",arr[i]); 
  } 
} 
  
/* Driver program to test above function */
int main() 
{ 
    int n,t;
    printf("Enter the value for test case ");
    scanf("%d",&t);
    while(t!=0)
    {
    printf("\nEnter the number ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    

    printLeaders(arr, n);
    t--;
    }
    return 0; 
} 