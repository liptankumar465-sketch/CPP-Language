#include <iostream>
using namespace std;

/*
    Octimal code
*/
int isFibo(int n)
{

    // if n less than or equal to 1 return n
    if (n <= 1)
    {
        return n;
    }

    return isFibo(n - 1) + isFibo(n - 2);
}

int main()
{
    int a; // range
    cout << "Enter the range:- ";
    cin >> a;

    int i = 2, count = 0, sum = 0;
    while (true)
    {
        if (i % 2 == 0)
        {
            int currFibo = isFibo(i);
            sum += currFibo;
            count++;
        }

        if (count == a)
        {
            break;
        }

        i++;
    }

    cout << "Even index sum of " << a << "th term is:- " << sum << endl;

    return 0;
}