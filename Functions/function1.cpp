// Function to find power of any given number with any raiser
#include <iostream>
using namespace std;

int pow(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int number, raiser;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the raiser: ";
    cin >> raiser;
    cout << "The number is: " << pow(number, raiser);
    return 0;
}
