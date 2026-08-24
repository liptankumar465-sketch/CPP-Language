#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the num: ";
    cin >> n;
    int temp = n;
    int rev = 0;

    while (temp > 0)
    {
        rev = rev * 10 + temp % 10; // add the last digit in revers
        temp = temp / 10; // than last digit removed
    }

    if (n == rev)
    {
        cout << n << ":- is palindrome!";
    }
    else
    {
        cout << n << ":- is not palindrome!";
    }
    return 0;
}