#include <iostream>
using namespace std;

// Creating the funtion
void update(int arr[], int size){
    // Updatin the first element
    arr[0] = 12;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main()
{
    int arr[3] = {1, 2, 3};
    
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}
