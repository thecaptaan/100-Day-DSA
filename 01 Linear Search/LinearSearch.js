/*
    The Captaan
    Date: 2023-08-15
    Time: 8:30:00
    Last Modified: 2023-08-15, 8:30:00
    Filename: linearSearch.c
    Description:
        Linear search is a simple algorithm that sequentially searches for a target value through a list, checking each element until a match is found or the list is exhausted.
*/

// Linear Search Algorithm
function linearSearch(arr, target) {
    let result = 0;
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] == target) {
            result = i;
            break;
        } else result = -1;
    }
    return result;
}

let arr = [53, 1, 10, 80, 48, 78, 0, 17, 57, 0, 13, 40, 65, 20]
let result = linearSearch(arr, 78);
if (result != -1) {
    console.log("Element found at index: ", result);
} else {
    console.log("Element not found");
}