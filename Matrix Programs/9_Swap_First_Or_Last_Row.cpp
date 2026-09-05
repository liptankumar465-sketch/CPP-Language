#include <iostream>
#include <utility>
using namespace std;
const int MAX = 4;

void swapMatrix(int a[][MAX])
{
    for (int col = 0; col < MAX; col++)
    {
        swap(a[0][col], a[MAX - 1][col]);
    }
}

int main()
{
    int mat[MAX][MAX] = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}};

    swapMatrix(mat);

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}