function bubbleSort(arr) {
    let n = arr.length;

    // Bubble sort
    for (let i = 0; i < n - 1; i++) {
        for (let j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                
                let temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Printing the sorted array
    console.log(arr.join(" "));
}

// Example array
let arr = [5, 8, 4, 6, 9];
bubbleSort(arr);
