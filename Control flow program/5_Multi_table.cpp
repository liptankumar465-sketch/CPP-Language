#include <iostream>
using namespace std;

void table(int n)
{
    for (int i = 1; i <= 10; ++i)
    {
        cout << n << " * " << i << " :- " << n * i << endl;
    }
}
int main()
{
    cout << "Enter the no:- ";
    int num;
    cin >> num;
    table(num);

    return 0;
}