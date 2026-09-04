#include <iostream>
using namespace std;

const int MAX = 50;

void printBoundary(int a[][MAX], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1 ||
                j == 0 || j == col - 1)
            {
                cout << a[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int A[][MAX] = {{1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};

    printBoundary(A, 4, 4);

    return 0;
}