#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n)
{
    double original = n;
    double digits = 0;
    double sum = 0;

    // Count the number of digits
    int temp = n;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of powers of digits
    temp = n;

    while (temp > 0)
    {
        double digit = temp % 10;
        // round use for basicaly pow(5,3) = 125 but in my divis pow(5,3) = 124
        sum += static_cast<int>(round((pow(digit, digits))));
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int a, b;
    cout << "Enter the starting num:- ";
    cin >> a;
    cout << "Enter the ending num:- ";
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        if (isArmstrong(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}
