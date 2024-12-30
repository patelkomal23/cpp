#include <iostream>
using namespace std;

void insertValues(int arr[], int size)
{
    cout << "Enter " << size << " values for the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value for element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void displayArray(int arr[], int size)
{
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    insertValues(arr, size);

    displayArray(arr, size);

    return 0;
}
