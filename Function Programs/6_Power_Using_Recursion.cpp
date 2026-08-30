#include <iostream>
using namespace std;

long long power(int x, unsigned int n)
{
    if (n == 0)
        return 1;

    return x * power(x, n - 1);
    // long long result = 1;
    // for (unsigned int i = 0; i < n; i++)
    // {
    //     result *= x;
    // }
    // return result;
}

int main()
{
    int base, pow;
    cout << "Enter the base:- ";
    cin >> base;
    cout << "Enter the power:- ";
    cin >> pow;

    int res = power(base, pow);
    cout << "ans:- " << res << endl;
    return 0;
}