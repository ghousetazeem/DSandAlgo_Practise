#include <iostream>
using namespace std;

int main()
{

    int arr[100], size, mid, start, end, key;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "The array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the element that you want to search: ";
    cin >> key;
    start = 0;
    end = size - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (key == arr[mid])
        {
            cout << "Element found at location " << mid;
            break;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }
    if (start > end)
    {
        cout << "Element not found";
    }
    return 0;
}
