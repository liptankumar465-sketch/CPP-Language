#include <iostream>
using namespace std;
#define N 2

bool isIdentical(int a[][N], int b[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] != b[i][j])
                return false;
        }
    }
    return true;
}

int main()
{
    int A[N][N] = {{1, 2},
                   {3, 4}};

    int B[N][N] = {{1, 2},
                   {3, 6}};

    if (isIdentical(A, B))
    {
        cout << "matrices are identical";
    }
    else
    {
        cout << "matrices are not identical";
    }

    return 0;
}