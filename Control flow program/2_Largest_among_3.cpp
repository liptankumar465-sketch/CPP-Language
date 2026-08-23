#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the value of a:- ";
    cin >> a;
    cout << "Enter the value of b:- ";
    cin >> b;
    cout << "Enter the value of c:- ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << a << " is largest among " << b << " and " << c << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << " is largest among " << a << " and " << c << endl;
    }
    else
    {
        cout << c << " is largest among " << a << " and " << b << endl;
    }

    return 0;
}