#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/**
 * @ list declaration -> list<type> name;
 * ! list methodes:
 * ? push_back(), push_front()
 * ? pop_back(), pop_back()
 * ? size()
 * ? iterator for travers in list
 * ? begin(), end()
 * ? rbegin(), rend()
 */


int main()
{
    // creating a list to store integers
    list<int> l;

    // use of push_back()
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);

    // use of push_front()
    l.push_front(10);

    // use of size()
    cout <<"size of list:- "<< l.size() << endl;

    // iterator for printing all values
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;

    // iterator for printing all values in reverse order
    for (auto it = l.rbegin(); it != l.rend(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;
    // remove the last value
    l.pop_back();

    // remove the first value
    l.pop_front();

    // size
    cout <<"size of list:- "<< l.size() << endl;

    // updatated values prints
    for (auto val : l)
    {
        cout << val << " ";
    }

    return 0;
}