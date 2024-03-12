#include<iostream>
#include<vector> 
int main() {
    int n;
    std::cout << "Size of the array: ";
    std::cin >> n;

    std::vector<int> arr(n); 
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << " of the array: ";
        std::cin >> arr[i];
    }
     
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }

    std::cout << "\nSorted array: ";
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
