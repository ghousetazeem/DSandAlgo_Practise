#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, digit = 0, ans = 0, i = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    while (n != 0)
    {
        digit = n % 10;
        if (digit == 1)
        {
            ans = pow(2, i) + ans;
        }
        i++;
        n = n / 10;
    }
    cout << ans;
    return 0;
}
