#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no:- ";
    cin >> n;

    int sum = 0;
    for (int i = n; i >= 0; --i)
    {
        sum += i;
    }
    cout << "Sum of " << n << " natural no:- " << sum << endl;

    return 0;
}