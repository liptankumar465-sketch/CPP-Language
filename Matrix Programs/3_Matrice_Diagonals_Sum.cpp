#include <iostream>
using namespace std;
#define N 4

void diagonalSum(int a[][N])
{
    int principleDiago = 0;
    int secondryDiago = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                principleDiago += a[i][j];
            }

            if (i + j == N - 1)
            {
                secondryDiago += a[i][j];
            }
        }
    }
    cout << "Principle Diagonal: " << principleDiago << endl;
    cout << "Secondry Diagonal: " << secondryDiago << endl;
}

int main()
{
    int A[N][N] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {8, 7, 6, 5},
                   {4, 3, 2, 1}};

    diagonalSum(A);

    return 0;
}