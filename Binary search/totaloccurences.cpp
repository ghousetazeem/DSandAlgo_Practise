#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

// Main function
int main()
{
    int arr[6] = {1, 2, 2, 2, 5, 6};
    int index1 = firstOcc(arr, 6, 2);
    int index2 = lastOcc(arr, 6, 2);
    int totalOcc = (index2 - index1) + 1;
    cout << "The total number of occurences of the element is " << totalOcc << endl;
    return 0;
}
