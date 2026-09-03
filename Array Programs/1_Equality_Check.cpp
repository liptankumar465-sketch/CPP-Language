#include <iostream>
#include <algorithm>
using namespace std;

bool checkArray(int arr1[], int arr2[], int n, int m)
{
    if (n != m)
    {
        return false;
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    int i = 0;
    while (i < n)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
        i++;
    }

    return true;
}

int main()
{
    int nums1[] = {1, 2, 3, 4, 5};
    int nums2[] = {5, 4, 3, 2, 1};
    int n1 = sizeof(nums1) / sizeof(int);
    int n2 = sizeof(nums2) / sizeof(int);

    if (checkArray(nums1, nums2, n1, n2))
    {
        cout << "Both arrays are equal!";
    }
    else
    {
        cout << "arrays are not equal!";
    }

    return 0;
}