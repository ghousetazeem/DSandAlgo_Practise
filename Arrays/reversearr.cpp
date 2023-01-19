// Reversing an array
#include <iostream>
using namespace std;

// Writing the functions
void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start+=1;
        end-=1;
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[5] = {1, 2, 3, 4, 5};

    // Reversing
    reverseArr(arr1, 6);
    reverseArr(arr2, 5);
    cout << endl;

    // Printing
    printArr(arr1, 6);
    printArr(arr2, 5);

    return 0;
}
