#include<iostream>
using namespace std;

int main()
{
    int size, arr[100], sum = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // printing the sum
    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + sum;
    }
    cout << "The sum of the elements inthe array is: " << sum;

    return 0;
}
