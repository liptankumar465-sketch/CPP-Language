#include <iostream>
using namespace std;
/*
    *
    * *
    * * *
    * * * *
    * * * * *
*/
int main()
{
    int row, col, num;
    cout << "Enter the num: ";
    cin >> num;

    for (row = 1; row <= num; row++){
        for (col = 1; col <= row; col++){
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}