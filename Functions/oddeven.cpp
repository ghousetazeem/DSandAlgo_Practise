#include<iostream>
using namespace std;

bool isEven(int n){
    if (n & 1)
    {
        return 0;
    }

    return 1;
    
}
int main()
{
    int n;
    cout << "Enter the value of number: ";
    cin >> n;
    if (isEven(n))
    {
        cout << "The number is Even" << endl;
    }
    else
        cout << "The number is Odd" << endl;
    return 0;
}
