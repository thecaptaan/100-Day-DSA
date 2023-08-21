"""
    The Captaan
    Date: 2023-08-16
    Time: 8:30:00
    Last Modified: 2023-08-16, 8:30:00
    Filename: linearSearch.c
    Description:
        Bubble sort is a simple sorting algorithm that repeatedly steps through a list, compares adjacent elements, and swaps them if they are in the wrong order, gradually moving larger elements to the end.
"""
def bubble_sort(arr):
    for i in range(0, len(arr) - 1):
        for j in range(0, len(arr)- 1 - i):
            if arr[j] > arr[j + 1]:
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
            

arr = [53, 1, 10, 80, 48, 78, 17, 57, 0, 13, 40, 65, 20]
bubble_sort(arr)
print(arr)