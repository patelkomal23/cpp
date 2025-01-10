#include <iostream>
using namespace std;

void merge(int a[], int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of left subarray
    int n2 = right - mid;    // Size of right subarray

    // Create temporary arrays
    int* L = new int[n1];
    int* R = new int[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = a[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    // Merge the temporary arrays back into a[left..right]
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = left; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }

    // Free the temporary arrays
    delete[] L;
    delete[] R;
}

void merge_sort(int a[], int left, int right) {
    if (left < right) {
        // Find the middle point
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        merge_sort(a, left, mid);
        merge_sort(a, mid + 1, right);

        // Merge the sorted halves
        merge(a, left, mid, right);
    }
}

void print_arr(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl; // Added to ensure output is on a new line
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int* a = new int[n]; // Dynamically allocate array
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Array elements are: ";
    print_arr(a, n);
    
    merge_sort(a, 0, n - 1); // Call merge_sort on the entire array

    cout << "Sorted array: ";
    print_arr(a, n);

    delete[] a; // Free the dynamically allocated array
    return 0;
}