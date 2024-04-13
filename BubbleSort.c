//In this program we will implement bubble sort in C programming language
//best case time complexity is O(n)
//Worst case time complexity is O(n^2)
//Average case time complexity is O(n)
//Space Complexity O(1)


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void bubble_sort(int arr[],int size);//function to implement bubble sort

int main()
{
    int arr[]={23,45,100,67,23,12,67,56,34},size,i;

    size=sizeof(arr)/sizeof(int);//determine the size of array

    printf("\nArray before sorting.\n");

    for ( i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }
    


    bubble_sort(arr,size);

     printf("\nArray after sorting.\n");

    for ( i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }

    
    return 0;
}


//code for Bubble_sort

void bubble_sort(int arr[],int size)
{
    int i,j,temp;

    for ( i = 0; i < size; i++)
    {
        for (j = 0; j < (size-1)-i; j++)
        {
            if (arr[j]>arr[j+1]) //condition to swap 
            {
                //swap the element using temporary element temp
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    
}