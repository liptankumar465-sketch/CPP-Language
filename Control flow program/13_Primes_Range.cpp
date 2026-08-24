#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the first num:- ";
    cin >> a;
    cout << "Enter the sec num:- ";
    cin >> b;

    vector<int> primes; // stores primes
    for (int i = a; i <= b; i++)
    {
        if (i == 1) // 1 is not a prime no
        continue;

        bool check = false;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                check = true; // if check is true means curent element is not prime
            }
        }

        if (!check)
        {
            primes.push_back(i);
        }
    }

    cout << "prime nums:- ";
    for (int i = 0; i < primes.size(); i++)
    {
        cout << primes[i] << " ";
    }

    return 0;
}