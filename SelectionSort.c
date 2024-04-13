//In this program we will implement Selection Sort in C programming language
//best case time complexity is O(n^2)
//Worst case time complexity is O(n^2)
//Average case time complexity is O(n)
//Space Complexity O(1)


#include<stdio.h>
#include<stdlib.h>

void SelectionSort(int arr[],int size);//function to implement Selection Sort
int main()
{
    int arr[]={11,45,67,43,90,27,11,38,100,92};

    int size,i;

    size=sizeof(arr)/sizeof(int); //Code to find size of array

    printf("\nArray before Sorting.\n");

    for ( i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }

    printf("\nArray after Sorting\n");

    SelectionSort(arr,size);//calling Selection Sort

    for ( i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }
    
    return 0;
}

//code for Selection Sort
void SelectionSort(int arr[],int size)
{
    int i,j,current_min,temp;

    for ( i = 0; i < size; i++)
    {
        current_min=i;
        for ( j=i+1; j < size; j++)
        {
            if (arr[current_min]>arr[j])//condition to check minimum number
            {
                current_min=j; //assign index of minimum value to "current_min" 
            }
            
        }
        //swap the element of start with minimum number
        temp=arr[i];
        arr[i]=arr[current_min];
        arr[current_min]=temp;
        
    }
    
}







