#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double p, r, t;

    cout << "Enter the principal amount:- ";
    cin >> p; // principal amount
    cout << "Enter the rate:- ";
    cin >> r; // rate
    cout << "Enter the time:- ";
    cin >> t; // time

    double result = p * ((pow((1 + r / 100), t))); // compound intrest formula
    double CI = result - p;
    cout << "compound intrest:- " << CI << endl;

    return 0;
}