#include <iostream>
#include <vector>
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
/*
    Brute force code
*/
long isFibonacci(int n)
{
    // by defult 0th = 0 or 1th = 1
    vector<int> fibonacci{0, 1};
    int nextFibo = 0;

    if (n < 2)
        return n;

    for (int i = 2; i <= n; i++)
    {
        nextFibo = fibonacci[i - 1] + fibonacci[i - 2];
        fibonacci.push_back(nextFibo);
    }

    return nextFibo;
}

int main()
{
    int a;
    cout << "Enter the num:- ";
    cin >> a;

    long result = isFibonacci(a);
    cout << a << "th fibonacci no is:- " << result << endl;

    result = isFibo(a);
    cout << a << "th fibo no is:- " << result << endl;
    return 0;
}