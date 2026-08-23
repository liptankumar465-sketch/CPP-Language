#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "swap numbers using temp variable\n";

    int temp, a, b;
    cout << "Enter the frist no:- ";
    cin >> a;
    cout << "Enter the second no:- ";
    cin >> b;

    printf("\nbefore Swap the numbers\n");
    cout << "then frist no:- " << a << endl;
    cout << "then second no:- " << b << endl;

    temp = a;
    a = b;
    b = temp;

    printf("\nafter Swap the numbers\n");
    cout << "then frist no:- " << a << endl;
    cout << "then second no:- " << b << endl;

    cout << "swap numbers using swap operators\n";
    swap(a, b);

    printf("\nafter Swap the numbers\n");
    cout << "then frist no:- " << a << endl;
    cout << "then second no:- " << b << endl;
    return 0;
}