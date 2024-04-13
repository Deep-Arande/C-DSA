// In this program we will implement bubble sort in C programming language
// best case time complexity is O(n*logn)
// worst case time complexity is O(n*logn)
// Average case time complexity is O(n*logn)
// space complexity O(n)

#include <stdio.h>
#include <stdlib.h>

void merge_sort(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);

int main()
{
    int arr[] = {23, 12, 67, 56, 34, 11, 45, 67, 43, 90, 27};
    int size, i;

    size = sizeof(arr) / sizeof(int); // Code to find size of array

    printf("\nArray before Sorting.\n");

    for (i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    merge_sort(arr, 0, size - 1); // calling Merge Sort

    printf("\nArray after Sorting\n");

    for (i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}

// Program to sort the array

void merge_sort(int arr[], int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;

        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

// Program to merge two sorted arrays

void merge(int arr[], int low, int mid, int high)
{
    int *c = (int *)malloc((high - low - 1) * sizeof(int)); // Dynamically create temporary array

    int i, j, k = 0;

    i = low;
    j = mid + 1;

    while (i <= mid && j <= high) // condition to sort one part of array
    {
        if (arr[i] < arr[j])
        {
            c[k] = arr[i]; // store the smallest element
            i++;
            k++;
        }

        else
        {
            c[k] = arr[j]; // store the minimum element
            j++;
            k++;
        }
    }

    // code to sort remaining array
    while (i <= mid)
    {
        c[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        c[k] = arr[j];
        j++;
        k++;
    }

    // code to assign sorted array (here,C) into original array (here,arr)

    for (i = low, k = 0; i <= high; i++, k++)
    {
        arr[i] = c[k];
    }
}
