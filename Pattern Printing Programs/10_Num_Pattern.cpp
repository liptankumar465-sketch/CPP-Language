#include <iostream>
using namespace std;

int main()
{
    int row, col, n, number = 1;
    cout << "Enter the n:- ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        // number print
        for (col = 1; col <= row; col++)
        {
            cout << number << " ";
            number++;
        }
        cout<<endl;
    }
    return 0;
}