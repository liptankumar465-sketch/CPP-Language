#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> prefixSum2D(
    const vector<vector<int>>& arr)
{
    int n = arr.size();
    int m = arr[0].size();

    vector<vector<int>> prefix(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            prefix[i][j] = arr[i][j];

            if (i > 0)
                prefix[i][j] += prefix[i - 1][j];

            if (j > 0)
                prefix[i][j] += prefix[i][j - 1];

            if (i > 0 && j > 0)
                prefix[i][j] -= prefix[i - 1][j - 1];
        }
    }

    return prefix;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    vector<vector<int>> prefix = prefixSum2D(arr);

    for (const auto& row : prefix) {
        for (int value : row)
            cout << value << " ";
        cout << '\n';
    }

    return 0;
}