#include <iostream>
using namespace std;

int calAvg(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

int main()
{
    int nums1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(nums1) / sizeof(int);

    cout << "Avg of nums1:- " << calAvg(nums1, n1);

    return 0;
}