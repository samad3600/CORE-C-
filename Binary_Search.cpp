#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid; // Return the index if the element is found

        if (arr[mid] < target)
            left = mid + 1; // Discard the left half
        else
            right = mid - 1; // Discard the right half
    }
    return -1; // If target is not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int target = 30;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
