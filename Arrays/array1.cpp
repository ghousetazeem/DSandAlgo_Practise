#include <iostream>
using namespace std;

int main()
{
    // storing the data of hundered students marks
    // int b[] = {10, 20, 30, 40, 50};
    // cout << b << endl;
    int a[100];
    int n;
    cout << "Enter the size of the Array : ";
    cin >> n;
    cout << sizeof(n) << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << sizeof(a) << endl;
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ,";
    }
    cout << "]" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << &a[i] << endl;
    }

    // cout<< &a[0];
    return 0;
}
