#include <iostream>
using namespace std;

// Finding unique elements in array
// Array size is 2m + 1
// Creating the function
int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[5] = {1, 2, 5, 1, 2};
    cout << findUnique(arr, 5);
    return 0;
}
