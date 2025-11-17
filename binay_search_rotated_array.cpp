#include <iostream>
using namespace std;

// Function to find pivot (smallest element index)
int findPivot(int arr[], int n) {
    int s = 0, e = n - 1;
    int mid;

    while (s < e) {
        mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0]) {
            // Pivot lies in right half
            s = mid + 1;
        } else {
            // Pivot lies in left half
            e = mid;
        }
    }
    return s; // Pivot index (smallest element)
}

// Normal binary search
int binarySearch(int arr[], int s, int e, int key) {
    int mid;
    while (s <= e) {
        mid = s + (e - s) / 2;

        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) s = mid + 1;
        else e = mid - 1;
    }
    return -1;
}

// Search in rotated sorted array
int searchRotated(int arr[], int n, int key) {
    int pivot = findPivot(arr, n);

    // If key lies between pivot and end
    if (key >= arr[pivot] && key <= arr[n - 1]) {
        return binarySearch(arr, pivot, n - 1, key);
    }
    // Else in first half
    else {
        return binarySearch(arr, 0, pivot - 1, key);
    }
}

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements of rotated sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int idx = searchRotated(arr, n, key);

    if (idx != -1) {
        cout << "Element found at index: " << idx << endl;
    } else {
        cout << "Element not found" << endl;
    }
}
