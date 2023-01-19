#include <iostream>
using namespace std;

// function to reverse an array
void reversArr(int arr[], int size){
    int i = 0;
    while (i < size)
    {
        size--;
        cout << arr[size] << " ";
    }
    
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    reversArr(arr, 6);
}
