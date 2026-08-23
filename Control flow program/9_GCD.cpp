#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value a:- ";
    cin >> a;
    cout << "Enter the value b:- ";
    cin >> b;

    int result = __gcd(a, b);
    cout << "GCD:- " << result << endl;

    return 0;
}