#include <iostream>
#include <vector>
#include <limits> 

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << " of the array: ";
        std::cin >> arr[i];
    }

    std::cout << "The unsorted array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    for (int i = 0; i < n - 1; i++) {
        int min = __INT_MAX__;
        int minIndex = -1;
        for (int j = i; j < n; j++) {
            if (min > arr[j]) {
                min = arr[j];
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    std::cout << "\n\nThe sorted array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

