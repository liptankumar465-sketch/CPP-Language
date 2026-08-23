#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value:- ";
    cin >> a;
    cout << "Enter the value:- ";
    cin >> b;

    int max_num = (a > b) ? a : b;

    while (true)
    {
        if (max_num % a == 0 && max_num % b == 0)
        {
            cout << "lcm of " << a << " and " << b << " is:- " << max_num << endl;
            break;
        }
        max_num++;
    }

    return 0;
}