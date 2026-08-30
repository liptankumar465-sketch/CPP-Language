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

void findPrimes(int st, int end)
{
    bool found = false;
    for (int i = st; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
            found = true;
        }
    }

    if (!found)
    {
        printf("No any primes btw them");
    }
}
int main()
{
    int start, end;
    printf("Enter the start point:- ");
    cin >> start;
    printf("Enter the end point:- ");
    cin >> end;

    findPrimes(start, end);
    return 0;
}