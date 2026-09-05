#include <iostream>
#include <cmath>
using namespace std;
#define N 4

void traceOrNormal(int a[][N])
{
    int trace = 0;
    int normal = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // cal trace
            if (i == j)
            {
                trace += a[i][j];
            }
            // cal narmal
            normal +=  pow(a[i][j], 2);
        }
    }

    cout << "Trace: " << trace << endl;
    cout << "Normal: " << sqrt(normal) << endl;
}

int main()
{
    int A[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    traceOrNormal(A);

    return 0;
}