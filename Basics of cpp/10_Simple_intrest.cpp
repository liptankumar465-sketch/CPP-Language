#include <iostream>
using namespace std;

int main()
{
    float p, r, t;

    cout << "Enter the principal amount:- ";
    cin >> p; // principal amount
    cout << "Enter the rate:- ";
    cin >> r; // rate
    cout << "Enter the time:- ";
    cin >> t; // time

    float result = (p * r * t) / 100; // simple intrest formula
    cout << "simple intrest:- " << result << endl;

    return 0;
}