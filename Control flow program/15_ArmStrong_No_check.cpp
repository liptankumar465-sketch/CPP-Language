#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n)
{
    int original = n;
    int digits = 0;
    int sum = 0;

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
        int digit = temp % 10;
        // round use for basicaly pow(5,3) = 125 but in my divis pow(5,3) = 124
        sum += static_cast<int>(round((pow(digit, digits))));
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int num;
    cout << "Enter the num:- ";
    cin >> num;

    cout << (isArmstrong(num) ? "Yes" : "No");

    return 0;
}