#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start, end, mid;
    start = 0;
    end = size - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }

        if(key < arr[mid]){
            end = mid - 1;
        }
    }
    
    return -1;
}

int main()
{
    int oddarray[5] = {1,2,3,4,6};
    int index = binarySearch(oddarray, 5, 7);
    int evenarray[6] = {5,6,7,8,9,10};
    int oddindex = binarySearch(oddarray, 5, 2);
    int evenindex = binarySearch(evenarray, 6, 8);
    cout << "The element found at location: " << oddindex + 1 << endl;
    cout << "The element found at location: " << evenindex + 1;
    return 0;
}
