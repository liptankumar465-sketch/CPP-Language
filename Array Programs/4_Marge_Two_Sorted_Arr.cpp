#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
// method 1
vector<int> margeArray(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size(), n2 = nums2.size();
    vector<int> result;

    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (nums1[i] <= nums2[j])
        {
            result.push_back(nums1[i++]);
        }
        else
        {
            result.push_back(nums2[j++]);
        }
    }

    while (i<n1)
    {
        result.push_back(nums1[i++]);
    }

    while (j<n2)
    {
        result.push_back(nums2[j++]);
    }

    return result;
}
// method 2
vector<int> marge(vector<int>& arr1,vector<int>& arr2){
    vector<int> arr3; // store the marge arr

    //  insert the arr1 ele in arr3
    arr3.insert(arr3.end(),arr1.begin(),arr1.end());
    //  insert the arr2 ele in arr3
    arr3.insert(arr3.end(),arr2.begin(),arr2.end());

    sort(arr3.begin(),arr3.end()); // than sort the arr3 ele

    return arr3;
}

int main()
{
    vector<int> arr1 = {5, 8, 9};
    vector<int> arr2 = {4, 7, 8};

    vector<int> res = marge(arr1, arr2);

    for (int num : res)
    {
        cout << num << " ";
    }

    return 0;
}