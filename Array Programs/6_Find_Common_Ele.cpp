#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> commons(int nums1[], int nums2[], int n, int m)
{
    unordered_set<int> elements(nums1, nums1 + n);
    vector<int> common;

    for (int i = 0; i < m; i++)
    {
        if (elements.find(nums2[i]) != elements.end())
        {
            common.push_back(nums2[i]);
        }
    }

    return common;
}

int main()
{
    int arr1[] = {1, 45, 54, 71, 76, 12};
    int arr2[] = {1, 7, 5, 4, 6, 12};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> res = commons(arr1, arr2, n1, n2);

    for (int i : res)
        cout << i << " ";
    return 0;
}