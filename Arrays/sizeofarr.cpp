#include <iostream>
using namespace std;

int main()
{
    int arr[10000] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int size = sizeof(arr) / sizeof(int);
    cout << size;

    return 0;
}
