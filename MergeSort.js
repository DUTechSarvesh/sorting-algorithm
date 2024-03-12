function merge(arr, l, mid, r) {
    let an = mid - l + 1;
    let bn = r - (mid + 1) + 1;
    let a = arr.slice(l, mid + 1); // create one array
    let b = arr.slice(mid + 1, r + 1); // create another array

    let i = 0;
    let j = 0;
    let k = l;
    while (i < an && j < bn) {
        if (a[i] < b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }
    while (i < an) {
        arr[k++] = a[i++];
    }
    while (j < bn) {
        arr[k++] = b[j++];
    }
}

function mergesort(arr, l, r) {
    if (l >= r) return;

    let mid = Math.floor((l + r) / 2);
    mergesort(arr, l, mid);
    mergesort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

let arr = [8, 5, 4, 7, 6];
let size = arr.length;
mergesort(arr, 0, size - 1);
console.log("The sorted array:", arr.join(" "));
