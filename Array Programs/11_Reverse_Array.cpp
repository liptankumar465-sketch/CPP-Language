#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr)
{
    int n = arr.size();
    vector<int> rev(n);
    for (int i = 0; i < n; i++)
    {
        rev[n - i - 1] = arr[i];
    }

    for(int i : rev)
    cout<< i << " ";
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    reverse(nums);

    return 0;
}