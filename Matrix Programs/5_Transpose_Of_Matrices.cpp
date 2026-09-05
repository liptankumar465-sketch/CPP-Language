#include <iostream>
using namespace std;

const int MAX = 50;
const int N = 4;

void transpose(int a[][MAX], int b[][N], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            b[i][j] = a[j][i];
        }
    }
}

int main()
{
    int A[][MAX] = {{1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};

    int B[N][N]; //  stored the transpose

    cout << "Transpose of matrixces\n";
    transpose(A, B, 4, 4);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}