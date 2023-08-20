/*
    The Captaan
    Date: 2023-08-15
    Time: 8:30:00
    Last Modified: 2023-08-15, 8:30:00
    Filename: linearSearch.c
    Description:


*/

#include <stdio.h>

// Linear Search Function
int linearSearch(int arr[], int n, int x)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            result = i;
            break;
        }
        else
        {
            result = -1;
        }
    }
    return result;
}
int main(void)
{
    int arr[] = {53, 1, 10, 80, 48, 78, 0, 17, 57, 0, 13, 40, 65, 20};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, arrSize, 0);
    if (result != -1)
    {
        printf("Element is present at index %d\n", result);
    }
    else
    {
        printf("Element is not present in array\n");
    }
    return 0;
}