/*
    The Captaan
    Date: 2023-08-16
    Time: 8:30:00
    Last Modified: 2023-08-16, 8:30:00
    Filename: bubbleSort.js
    Description:
        Bubble sort is a simple sorting algorithm that repeatedly steps through a list, compares adjacent elements, and swaps them if they are in the wrong order, gradually moving larger elements to the end.
*/

function bubbleSort(arr) {
    for (let i = 0; i < (arr.length - 1); i++) {
        for (let j = 0; j < (arr.length - i - 1); j++) {
            if (arr[j] > arr[j + 1]) {
                let temp = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = temp
            }
        }
    }
}
let arr = [53, 1, 10, 80, 48, 78, 17, 57, 0, 13, 40, 65, 20]
bubbleSort(arr)
console.log(arr)