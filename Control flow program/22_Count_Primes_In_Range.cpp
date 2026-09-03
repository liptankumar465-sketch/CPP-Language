#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n)
{
    if (n <= 2)
    {
        return 0;
    }

    int count = 0;
    vector<bool> composite(n, false);
    for (int i = 2; i * i < n; i++)
    {
        if (!composite[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                composite[j] = true;
            }
        }
    }

    for (int i = 2; i < composite.size(); i++)
    {
        if (!composite[i])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int num;
    cout << "Enter the no:- ";
    cin >> num;

    cout << countPrimes(num) << " primes in range " << num << endl;

    return 0;
}