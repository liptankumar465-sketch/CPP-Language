#include <iostream>
using namespace std;

float area(float x, float y) { return x * y; };

float perameter(float x, float y) { return 2 * (x + y); };

int main()
{
    float a, b;
    cout << "Enter the length:- ";
    cin >> a;
    cout << "Enter the breath:- ";
    cin >> b;

    cout << "area of rectangle:- " << area(a, b) << endl;
    cout << "perameter of rectangle:- " << perameter(a, b) << endl;

    return 0;
}