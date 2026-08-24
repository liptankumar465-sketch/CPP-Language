#include <iostream>
using namespace std;

void isFactors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int a;
    cout << "Enter the no:- ";
    cin >> a;

    cout << a << "th factors are:- ";
    isFactors(a);

    return 0;
}