#include <iostream>
using namespace std;
/*
    1-> pattern
    1
    2 3               row => 1 to n
    4 5 6             col => 1 to row (print count and ++)
    7 8 9 10
    11 12 13 14 15
*/
/*
    2-> pattern
    1
    2 2                 row => 1 to n
    3 3 3               col => 1 to row (print count) ++
    4 4 4 4
    5 5 5 5 5
*/
/*
    3-> pattern
    1
    1 2                row => 1 to n
    1 2 3              col => 1 to row (print col)
    1 2 3 4
    1 2 3 4 5
*/
int main()
{
    int row, col, num;
    cout << "Enter the num: ";
    cin >> num;

    cout << "\nPattern 1\n";
    int count = 1;
    for (row = 1; row <= num; row++)
    {
        // count print
        for (col = 1; col <= row; col++)
        {
            cout << count << " ";
            count++;
        }

        cout << endl;
    }

    cout << "\nPattern 2\n";
    count = 1;
    for (row = 1; row <= num; row++)
    {
        // col print
        for (col = 1; col <= row; col++)
        {
            cout << count << " ";
        }
        count++;

        cout << endl;
    }

    cout << "\nPattern 3\n";
    count = 1;
    for (row = 1; row <= num; row++)
    {
        // count print
        for (col = 1; col <= row; col++)
        {
            cout << count << " ";
            count++;
        }
        count = 1;

        cout << endl;
    }
    return 0;
}