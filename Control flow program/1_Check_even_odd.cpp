#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the no:- ";
    int n;
    cin >> n;
    (n % 2 == 0) ? cout << "even" : cout << "odd";
    return 0;
}