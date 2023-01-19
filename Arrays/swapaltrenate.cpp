#include <iostream>
using namespace std;

void swapAlter(int arr[], int size)
{
    int start = 0;
    int sec = 1;
    while (start < size - 1)
    {
        swap(arr[start], arr[sec]);
        start = start + 2;
        sec = sec + 2;
    }
    
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n, array[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    { 
        cin >> array[i];
    }

    swapAlter(array, n);

    printArr(array, n);
    return 0;
}
