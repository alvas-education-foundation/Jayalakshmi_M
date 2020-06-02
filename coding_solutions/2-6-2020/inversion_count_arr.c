//
Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum.
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, the size of array. The second line of each test case contains N elements.
//


// C program to Count 
// Inversions in an array 
#include <stdio.h> 
int getInvCount(int arr[], int n) 
{ 
    int inv_count = 0; 
    for (int i = 0; i < n - 1; i++) 
        for (int j = i + 1; j < n; j++) 
            if (arr[i] > arr[j]) 
                inv_count++; 
  
    return inv_count; 
} 
  
/* Driver progra to test above functions */
int main(int argv, char** args) 
{ 
    int n,t;
    printf("Enter the test cases");
    scanf("%d",&t);
    while(t!=0)
    {
    printf("Enter the n number ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    printf(" Number of inversions are %d \n", getInvCount(arr, n)); 
    return 0; 
    t--;
    }
} 