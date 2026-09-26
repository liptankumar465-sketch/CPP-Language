//!-----------Increment and Decrement-----------------//
//? 1. Post increment(+) and Post decrement(-)
// todo:     val++             val--
//? 2. Pre increment(+) and Pre decrement(-)
// todo:     ++val             --val

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // todo: Evalueate
    int j = 5, k = 5, l = 2;

    cout << (5 * ++j) % 6 << endl;
    cout << j << endl;
    cout << (5 * j++) % 6 << endl;
    cout << j << endl;
    cout << k - 8 - --l << endl;

    k = l = j++;
    cout << k << endl;
    cout << j << endl;

    return 0;
}