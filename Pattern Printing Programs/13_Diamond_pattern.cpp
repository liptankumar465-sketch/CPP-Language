#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout << "Enter the n:- ";
    cin >> n;

    // upper part
    for (row = 1; row <= n; row++)
    {
        // space print
        for (col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        // * print
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // lower part
    for (row = n - 1; row >= 1; row--)
    {
        // space print
        for (col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        // * print
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}