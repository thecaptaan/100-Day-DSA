/*
    The Captaan
    Date: 2023-08-17
    Time: 8:30:00
    Last Modified: 2023-08-17, 8:30:00
    Filename: insertionSort.js
    Description:
        Insertion sort is a sorting algorithm that builds the final sorted list one item at a time by inserting each element into its correct position among the previously sorted elements.
*/
function insertionSort(arr) {
    for (let i = 1; i < arr.length; i++) {
        let temp = arr[i]
        let j = i - 1
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j]
            j--
        }
        arr[j + 1] = temp
    }
}

let arr = [53, 1, 10, 80, 48, 78, 17, 57, 0, 13, 40, 65, 20]
insertionSort(arr)
console.log(arr)