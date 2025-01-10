#include<iostream>
using namespace std;

void selection_sort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        // Find the index of the minimum element in the unsorted part
        int min_index = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        // Swap the found minimum element with the first unsorted element
        if(min_index != i)
        {
            swap(a[i], a[min_index]);
        }
    }
}

void print_arr(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl; // Added to ensure output is on a new line
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Array elements are: ";
    print_arr(a, n);
    
    cout << "Sorted array: ";
    selection_sort(a, n);
    print_arr(a, n);

    return 0;
}