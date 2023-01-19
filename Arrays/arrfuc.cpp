#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    cout << "Printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing done";
    
}

int main()
{
    int third[100];
    printArray(third, 10);
    return 0;
}
