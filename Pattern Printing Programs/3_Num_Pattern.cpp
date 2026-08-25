#include <iostream>
using namespace std;
/*
    1
    2 3               row => 1 to n
    4 5 6             col => 1 to row (print count)
    7 8 9 10
    11 12 13 14 15
*/
int main()
{
    int row, col, num;
    cout << "Enter the num: ";
    cin >> num;

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

    return 0;
}