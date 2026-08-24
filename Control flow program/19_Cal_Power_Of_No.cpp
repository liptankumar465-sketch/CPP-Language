#include <iostream>
#include <math.h>
using namespace std;

void calPower(float base, float power)
{
    float result = pow(base, power);

    printf("%f raiesd to the power of %f is:- %f\n", base, power, result);
}

int main()
{
    int a, b;
    cout << "Enter the base:- ";
    cin >> a;
    cout << "Enter the power:- ";
    cin >> b;

    calPower(a, b);

    return 0;
}