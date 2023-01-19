#include<iostream>
using namespace std;
// Write the function here
int getPivot(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}


int main(){
    // int arr[] = {2, 3, 5, 7, 8, 6, 1};
    // int arr[6] = {3, 5, 8, 10, 17, 1};
    int arr[7] = {8, 9, 10, 1, 2, 3, 5};
    int ans = getPivot(arr, 7);
    cout << "The pivot of the given array is: " << ans << endl;
    return 0;
}
