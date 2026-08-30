#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    printf("Enter the num:- ");
    cin >> n;

    for (row = n; row >= 0; row--)
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