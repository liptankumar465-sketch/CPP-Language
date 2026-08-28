#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    2 types pair declaration -> pair<type1, type2> name;
    3 types pair declaration -> pair<type1, pair<type2, type3>> name;
    4 or more type declaration -> pair<type1, pair<type2, pair<type3, type4>>> name;

    pair methods:
    1 -> name = make_pair();
    2 -> name.first = value;
    3 -> name.second = value;
*/

int main()
{
    // 1 => creating a pair for storing name | age
    pair<string, int> p;

    // inserting the name | age
    p = make_pair("liptan", 18);

    // printing stored pair name | age
    cout << "name:- " << p.first << endl;
    cout << "age:- " << p.second << endl;

    // updataing the pair
    p.first = "sumit";
    p.second = 21;

    // printing updataing name | age
    cout << "name:- " << p.first << endl;
    cout << "age:- " << p.second << endl;

    //---------------------------------------------------//

    // 2 => creating a pair for storing name | age | section
    pair<string, pair<int, char>> p2;

    // inserting the name | age | section
    p2 = make_pair("rohit", make_pair(23, 'A'));

    // printing stored pair name | age | section
    printf("%s name, %d age, %c section\n", p2.first, p2.second.first, p2.second.second);

    // updataing the pair
    p2.first = "ram";
    p2.second.first = 30;
    p2.second.second = 'B';

    // printing updataing name | age | section
    printf("%s name, %d age, %c section\n", p2.first, p2.second.first, p2.second.second);

    return 0;
}