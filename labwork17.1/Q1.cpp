#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    if (arr == nullptr)
    {
        cout << "Memory allocation failed!" << endl;
    }
    else
    {
        cout << "Memory allocation is successfully created..." << endl;

        for (int i = 0; i < size; i++)
        {
            arr[i] = i * 10;
        }

        cout << "Array elements: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        delete[] arr;
        cout << "Memory has been deleted using delete keyword." << endl;
    }

    return 0;
}
