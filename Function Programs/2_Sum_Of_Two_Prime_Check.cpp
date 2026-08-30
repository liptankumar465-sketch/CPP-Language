#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

bool isPossible(int n)
{
    return isPrime(n) && isPrime(n - 2);
}

int main()
{
    int num;
    printf("Enter the no:- ");
    cin >> num;

    if (isPossible(num))
    {
        cout << "This is possible";
    }
    else
    {
        cout << "This is not possible";
    }

    return 0;
}