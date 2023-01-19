// Linear search using function
#include <iostream>
using namespace std;

// Writing a function
bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

// Main function
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int key;
    cout << "Enter the value of Key: ";
    cin >> key;
    linearSearch(arr1, 5, key);
    if (linearSearch)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    
    return 0;
}
