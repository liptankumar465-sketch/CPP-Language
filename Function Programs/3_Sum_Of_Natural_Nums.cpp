#include <iostream>
using namespace std;

int sumOfNaturalNo(int n)
{
    if (n <= 1)
        return n;

    return n + sumOfNaturalNo(n - 1);
}
int main()
{
    int num;
    cout << "Enter the no:- ";
    cin >> num;

    int res = sumOfNaturalNo(num);
    cout << "The sum of " << num << " Natural no is:- " << res << endl;

    return 0;
}