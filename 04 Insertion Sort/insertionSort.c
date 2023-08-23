/*
    The Captaan
    Date: 2023-08-17
    Time: 8:30:00
    Last Modified: 2023-08-17, 8:30:00
    Filename: insertionSort.c
    Description:
        Insertion sort is a sorting algorithm that builds the final sorted list one item at a time by inserting each element into its correct position among the previously sorted elements.
*/
#include <stdio.h>
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int main(void)
{
    int arr[] = {53, 1, 10, 80, 48, 78, 17, 57, 0, 13, 40, 65, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}