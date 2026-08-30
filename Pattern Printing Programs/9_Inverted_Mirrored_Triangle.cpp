#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    printf("Enter the num:- ");
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        // space print
        for (col = 1; col <= row - 1; col++)
        {
            cout << "  ";
        }
        // * print
        for (col = 1; col <= n - row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}