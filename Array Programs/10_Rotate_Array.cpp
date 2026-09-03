#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr1, int start, int end)
{
    while (start < end)
    {
        int temp = arr1[start];
        arr1[start] = arr1[end];
        arr1[end] = temp;

        start++;
        end--;
    }
}

void rotate(vector<int> &arr, int k)
{
    int n = arr.size();
    if (k % n == 0)
        return;

    k = k % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    for (int i : arr)
    {
        cout << i << " ";
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int rote = 3;

    rotate(nums, rote);

    return 0;
}