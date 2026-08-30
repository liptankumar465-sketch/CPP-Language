#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    printf("Enter the num:- ");
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        // * print
        for (col = row; col <= n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}