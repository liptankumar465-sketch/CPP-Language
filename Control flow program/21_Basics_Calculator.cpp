#include <iostream>
using namespace std;

void calculator(float x, char op, float y)
{
    switch (op)
    {
    case '+':
        cout << x + y;
        break;
    case '-':
        cout << x - y;
        break;

    case '*':
        cout << x * y;
        break;

    case '/':
        cout << x / y;
        break;
    default:
        cout << "Unexpected opertor!";
        break;
    }
}

int main()
{
    float a;
    cout << "Enter the oprends:- ";
    cin >> a;

    char ch;
    cin >> ch;

    float b;
    cin >> b;

    cout << "result:- ";
    calculator(a, ch, b);

    return 0;
}