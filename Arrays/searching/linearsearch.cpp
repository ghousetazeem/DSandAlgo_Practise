// Linear search program
#include <iostream>
using namespace std;

int main()
{
    int key, arr[5] = {1, 2, 4, 6, 7};
    cout << "Enter the key value : ";
    cin >> key;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index: " << i << endl;
        }
    }
    cout << "Element not found" << endl;

    return 0;
}
