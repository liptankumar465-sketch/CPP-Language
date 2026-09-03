#include <iostream>
#include <vector>
using namespace std;

void prifixSum(vector<int> &arr)
{
    vector<int> res;

    int prifSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        prifSum += arr[i];
        res.push_back(prifSum);
    }

    for (int i : res)
        cout << i << " ";
}

int main()
{
    vector<int> nums = {10, 20, 10, 5, 15};
    prifixSum(nums);

    return 0;
}