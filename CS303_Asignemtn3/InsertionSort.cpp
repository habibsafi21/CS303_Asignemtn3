#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    std::vector<int> arr = { 20, 65, 30, 10 };

    std::cout << "Original Array: ";
    for (int num : arr) std::cout << num << " ";
    std::cout << std::endl;

    insertionSort(arr);

    std::cout << "Sorted Array: ";
    for (int num : arr) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}