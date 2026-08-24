#include <iostream>
using namespace std;
/*
    - - - - *
    - - - * *
    - - * * *
    - * * * *
    * * * * *


*/
int main()
{
    int row, col, num;
    cout << "Enter the num: ";
    cin >> num;

    for (row = 1; row <= num; row++)
    {
        // space print
        for (col = row; col <= num - 1; col++)
        {
            cout << " ";
        }
        // * print
        for (col = 1; col <= row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}