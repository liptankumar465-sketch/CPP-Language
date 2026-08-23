#include <iostream>
using namespace std;

float mul_floatNumbers(float x, float y) { return x * y; };

int main()
{
    float a, b;
    cout << "Enter the no:- ";
    cin >> a;
    cout << "Enter the no:- ";
    cin >> b;
    float product = mul_floatNumbers(a, b);
    cout << "Product of float numbers:- " << product << endl;

    return 0;
}