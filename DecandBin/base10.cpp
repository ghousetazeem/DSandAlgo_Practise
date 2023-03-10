#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, ans = 0, m;
    cout << "Enter the value of n: ";
    cin >> n;
    m = n;
    int mask = 0; 
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    ans = (~n) & mask;
    cout << ans;
    
}
