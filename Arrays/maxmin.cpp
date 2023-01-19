#include<iostream>
using namespace std;


int getMax(int arr[], int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    return max;
}

int getMin(int arr[], int size){
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    return min;
}

int main()
{
    // Printing the maximum value
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    cout << "The minimum value of the array is : " << getMin(num, size) << endl;
    cout << "The maximum value of the array is : " << getMax(num, size);
    return 0;
}
