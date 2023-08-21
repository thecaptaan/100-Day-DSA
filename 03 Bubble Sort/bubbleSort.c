/*
    The Captaan
    Date: 2021-10-09
    Time: 11:30:00
    Last Modified: 2021-10-09, 11:30:00
    Filename: bubbleSort.c
    Description:
        Bubble sort is a simple sorting algorithm that repeatedly steps through a list, compares adjacent elements, and swaps them if they are in the wrong order, gradually moving larger elements to the end.

*/

#include <stdio.h>

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int arr[10] = {23, 34, 12, 45, 67, 11, 9, 3, 5, 1};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, arrSize);
    for (int i = 0; i < arrSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}