// In this program we will implement Selection Sort in C programming language
// best case time complexity is O(n)
// Worst case time complexity is O(n^2)
// Average case time complexity is O(n)
// Space Complexity O(1)

#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[], int size);

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


    insertion_sort(arr, size); // calling Selection Sort


    printf("\nArray after Sorting\n");

    for (i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}

void insertion_sort(int arr[], int size)
{
    int i, j, step;

    for (i = 1; i < size; i++)
    {
        step = arr[i];
        j = i - 1;
        while (arr[j] > step && j >= 0) // Condition to insert minimum element
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = step;
    }
}