#include <iostream>
#include <vector>

void merge(std::vector<int>& arr, int l, int mid, int r) {
    int an = mid - l + 1;
    int bn = r - (mid + 1) + 1;
    std::vector<int> a(an); 
    std::vector<int> b(bn); 

    for (int i = 0; i < an; i++) {
        a[i] = arr[i + l]; 
    }
    for (int j = 0; j < bn; j++) {
        b[j] = arr[mid + 1 + j]; 
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < an && j < bn) {
        if (a[i] < b[j]) {
            arr[k++] = a[i++];
        } else
            arr[k++] = b[j++];
    }
    while (i < an) {
        arr[k++] = a[i++];
    }
    while (j < bn) {

        arr[k++] = b[j++];
    }
    return;
}

void mergesort(std::vector<int>& arr, int l, int r) {
    if (l >= r)
        return;
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);

        return;
    }
}

int main() {
    std::vector<int> arr = {8, 5, 4, 7, 6};
    int size = arr.size();
    mergesort(arr, 0, size - 1);
    std::cout << "The sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
