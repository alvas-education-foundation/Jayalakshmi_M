//In Bubble sort, each pass consists of comparison each element in the file with its successor (i.e. x[i] with x[i+1]) and interchanging two elements if they are not in the proper order. The array may be sorted in any pass. If the array is sorted, then remaining passes should be skipped off. Write a C Program to sort an array of integers in ascending order and display the sorted array and Number of passes performed for sorting.

//


#include<stdio.h>
void bubble_sort(int[], int);
void main() {
   int arr[30], num, i;
   printf("\nEnter no of elements :");
   scanf("%d", &num);
   printf("\nEnter array elements :");
   for (i = 0; i < num; i++)
      scanf("%d", &arr[i]);
   bubble_sort(arr, num);
}
 
void bubble_sort(int iarr[], int num) {
   int i, j, k, temp;
 
   printf("\nUnsorted Data:");
   for (k = 0; k < num; k++) {
      printf("%5d", iarr[k]);
   }
 
   for (i = 1; i < num; i++) {
      for (j = 0; j < num - 1; j++) {
         if (iarr[j] > iarr[j + 1]) {
            temp = iarr[j];
            iarr[j] = iarr[j + 1];
            iarr[j + 1] = temp;
         }
      }
 
      printf("\nAfter pass %d : ", i);
      for (k = 0; k < num; k++) {
         printf("%5d", iarr[k]);
      }
   }
   printf("\ntotal passes are :%d",i-1);
}