function main() {
    const arr = [4, 5, 6, 7, 8]; // Predefined array

    console.log("The unsorted array:");
    console.log(arr.join(" "));

    // Selection sort
    for (let i = 0; i < arr.length - 1; i++) {
        let minIndex = i;
        for (let j = i + 1; j < arr.length; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap
        let temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    console.log("\n\nThe sorted array:");
    console.log(arr.join(" "));
}

main();
