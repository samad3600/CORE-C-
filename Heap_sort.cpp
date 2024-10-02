#include <iostream>
#include <algorithm>
using namespace std;

void heapSort(int arr[], int n) {
    make_heap(arr, arr + n);
    sort_heap(arr, arr + n);
}

int main() {
    int arr[] = {3, 5, 1, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, n);
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}
