#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, bit = 0, ans = 0, i = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    while (n != 0)
    {
        bit = n & 1;
        ans = ((pow(10,i)) * bit) + ans;
        i++;
        n = n >> 1;
    }
    cout << ans;
}
