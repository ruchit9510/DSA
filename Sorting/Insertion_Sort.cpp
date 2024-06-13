#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) { // Start from the second element
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main() {
    int n;
    cout << "Enter Size of an Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Your Array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
