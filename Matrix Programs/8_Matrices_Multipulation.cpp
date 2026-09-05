#include <iostream>
using namespace std;

const int MAX = 100;

// Function to multiply two matrices
void multiplyMatrices(
    int mat1[][MAX],
    int mat2[][MAX],
    int result[][MAX],
    int r1, int c1,
    int r2, int c2)
{
    // Initialize result matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply the matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] +=
                    mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int mat1[][MAX] = {
        {1, 2},
        {3, 4}
    };

    int mat2[][MAX] = {
        {5, 6},
        {7, 8}
    };

    int r1 = 2, c1 = 2;
    int r2 = 2, c2 = 2;

    // Matrix multiplication is possible only if
    // columns of mat1 = rows of mat2
    if (c1 != r2) {
        cout << "Matrix multiplication is not possible";
        return 0;
    }

    int result[MAX][MAX];

    multiplyMatrices(
        mat1, mat2, result,
        r1, c1, r2, c2
    );

    cout << "Resultant Matrix:\n";

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}