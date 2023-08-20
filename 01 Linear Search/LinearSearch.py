"""
    The Captaan
    Date: 2023-08-15
    Time: 8:30:00
    Last Modified: 2023-08-15, 8:30:00
    Filename: linearSearch.c
    Description:
        Linear search is a simple algorithm that sequentially searches for a target value through a list, checking each element until a match is found or the list is exhausted.
"""
def linear_search( arr, x):
    result = 0
    for i in range(len(arr)):
        if arr[i] == x:
            result = i
            break;
        else:
            result = -1
    return result
myList  = [53, 1, 10, 80, 48, 78, 0, 17, 57, 0, 13, 40, 65, 20]
result = linear_search(myList, 3)
if result != -1:
    print("Element found at index: ", result)
else:
    print("Element not found")