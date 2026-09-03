#include <iostream>
using namespace std;

int main()
{
    const int rows = 3;
    const int cols = 3;

    int arr[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // nested loop method
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << '\n';
    }

    // range base
    for (const auto& row : arr)
    {
        for (const auto& ele : row)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}