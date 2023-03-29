#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr2[5] = {1,4,5,3,2};
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    bubbleSort(arr2, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
}
