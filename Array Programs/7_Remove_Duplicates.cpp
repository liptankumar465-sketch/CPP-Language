#include <iostream>
#include <vector>
using namespace std;

void removeDupli(vector<int> &arr)
{
    int i = 0;
    int j = 1;
    while (j < arr.size())
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
        j++;
    }

    for (int idx = 0; idx <= i; idx++)
    cout << arr[idx] << " ";
}

int main()
{
    vector<int> nums = {1, 2, 2, 3, 4, 4, 4, 5, 5};

    removeDupli(nums);

    return 0;
}