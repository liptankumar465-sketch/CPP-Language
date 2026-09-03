#include <iostream>
using namespace std;

void maxOrMin(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "max element:- " << max << endl;
    cout << "min element:- " << min << endl;
}

int main()
{
    int nums1[] = {12, 22, 31, 44, 25};
    int n1 = sizeof(nums1) / sizeof(int);

    maxOrMin(nums1, n1);

    return 0;
}