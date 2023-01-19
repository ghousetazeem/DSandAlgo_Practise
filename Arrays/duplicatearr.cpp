#include <iostream>
#include <math.h>
using namespace std;

// finding the duplicate element in an array

int main()
{
    int arr[6] = {5, 1, 2, 3, 4, 2};
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < 5; i++)
    {
        ans = ans ^ i;
    }
    cout << ans;
    
    return 0;
}
