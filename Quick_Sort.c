// In this program we will implement Quick Sort algorithm
//  best case time complexity is O(n*logn)
//  worst case time complexity is O(n^2)
//  Average case time complexity is O(n*logn)
//  space complexity O(logn)

#include <stdio.h>
#include <stdlib.h>

void quick_sort(int arr[], int low, int high); // Function to sort array
int pivot(int arr[], int low, int high);       // Function to return pivot
void swap(int *a, int *b);                     // Function to swap elements

int main()
{
    int arr[] = {23, 12, 67, 56, 34, 11, 45, 11, 45, 67, 43, 90, 27};
    int i, size;

    size = sizeof(arr) / sizeof(int);

    printf("\nArray before Sorting.\n");

    for (i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    quick_sort(arr, 0, size - 1); // calling quick_sort Sort

    printf("\nArray after Sorting\n");

    for (i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}

// Code to sort array

void quick_sort(int arr[],int low,int high)
{
    int pi;
    if (low<high)
    {
        pi=pivot(arr,low,high);

        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
    }
    
}

// Program to return pivot
int pivot(int arr[], int low, int high)
{
    int pivot=arr[high];
    int i;
    int j=low-1;

    for ( i = low; i < high; i++)
    {
        if (arr[i]<=pivot)
        {
            
            j++;
            swap(&arr[i],&arr[j]);
            
        }
        
    }
    swap(&arr[j+1],&arr[high]);

    return j+1;

}       

// Program to swap elements
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
