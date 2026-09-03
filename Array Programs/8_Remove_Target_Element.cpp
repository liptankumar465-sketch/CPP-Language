#include <iostream>
#include <vector>
using namespace std;

void removeElem(vector<int> &arr, int target)
{
    vector<int> res;

    for (int i = 0; i < arr.size(); i++)
        if (arr[i] != target)
            res.push_back(arr[i]);

    for (int i : res)
        cout << i << " ";
}

int main()
{
    vector<int> nums = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int remove = 4;
    removeElem(nums, remove);

    return 0;
}