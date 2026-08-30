#include <iostream>
using namespace std;

int main()
{
    int row, col, n, number = 65; // char = 'A'
    cout << "Enter the n:- ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        // number print
        for (col = 1; col <= row; col++)
        {
            cout << static_cast<char>(number) << " ";
        }
        number++;
        cout << endl;
    }
    return 0;
}