#include <iostream>
using namespace std;
/*
    1-> pattern

    *  *  *  *  *
    *  *  *  *              row => 1 to n
    *  *  *                 col => row to n (print *)
    *  *
    *

*/
/*
    2-> pattern

    1  2  3  4  5
    1  2  3  4            row => 1 to n
    1  2  3               col => row to n (print count++) count = 1
    1  2
    1
*/
/*
    3-> pattern

    *  *  *  *  *  *  *
       *  *  *  *  *      row => 1 to n
          *  *  *         col => 1 to row - 1 (print space)
             *            col => row to 2*n - row - 1 (print *)

*/
int main()
{
    int row, col, num;
    cout << "Enter the num: ";
    cin >> num;

    cout << "\nPattern 1\n";
    for (row = 1; row <= num; row++)
    {
        // * print
        for (col = row; col <= num; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    cout << "\nPattern 2\n";
    int count = 1;
    for (row = 1; row <= num; row++)
    {
        // count print
        for (col = row; col <= num; col++)
        {
            cout << count << " ";
            count++;
        }
        count = 1;
        cout << endl;
    }

    cout << "\nPattern 3\n";
    for (row = 1; row <= num; row++)
    {
        // space print
        for (col = 1; col <= row - 1; col++)
        {
            cout << "  ";
        }
        // * print
        for (col = row - 1; col <= 2*num - row - 1; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}