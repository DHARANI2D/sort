// main.cpp
#include <iostream>
#include <cstdlib>

// Include the sorting algorithms code from the GitHub repository
#include "https://raw.githubusercontent.com/your-username/sorting-algorithms-online/main/sorting_algorithms.cpp"

int main() {
    // Get input from the user
    int n;
    std::cin >> n;

    std::vector<int> arr(n);

    for (int& num : arr) {
        std::cin >> num;
    }

    // Perform sorting algorithms
    printArray(arr);

    // Selection Sort
    selectionSort(arr);

    // Bubble Sort
    bubbleSort(arr);

    // Insertion Sort
    insertionSort(arr);

    // Merge Sort
    mergeSort(arr, 0, arr.size() - 1);

    // Quick Sort
    quickSort(arr, 0, arr.size() - 1);

    // Heap Sort
    heapSort(arr);

    return 0;
}
