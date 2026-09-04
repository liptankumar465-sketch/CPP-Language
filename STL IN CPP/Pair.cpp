#include <iostream>
#include <utility> // header file for pair
using namespace std;
/**
 * TODO: pair is a simple container that holds two values
 * TODO: together. these two values can be of diff types,
 * TODO: and they are stored as a single unit.
 * ? Header file for pair -> #include <utility>
 * ! pair<type1,type2> p;
 * *    pair methods:
 * *    1 -> name = make_pair();
 * *    2 -> name.first = value;
 * *    3 -> name.second = value;
 */

/*
    2 types pair declaration -> pair<type1, type2> name;
    3 types pair declaration -> pair<type1, pair<type2, type3>> name;
    4 or more type declaration -> pair<pair<type1, type2>, pair<type3,type4> name;
*/

int main()
{
    /**
     * ? Declaration and Initialization
     */

    pair<int, string> p;

    // by curly braces
    pair<int, string> p1 = {10, "Apple"};

    // by make_pair()
    pair<int, string> p2;
    p2 = make_pair(10, "Banana");

    // by default constructor + assignment
    pair<int, string> p3;
    p3.first = 30;
    p3.second = "Cherry";

    /**
     * ? Basics operations in pair
     */

    // 1-> Accessing value
    cout<<"-----Accessing------\n";
    cout << p1.first << " " << p1.second << endl;

    // 2-> Update values
    cout << "------updated------\n";
    p1.first = 20;
    p1.second = "Orange";

    cout << p1.first << " " << p1.second << endl;

    // compaire pair
    cout << "-----Compair pairs-----\n";
    pair<int, int> p4 = {3, 5};
    pair<int, int> p5 = {3, 7};
    pair<int, int> p6 = {2, 5};

    cout << (p4 == p5) << endl; // 0
    cout << (p4 != p6) << endl; // 1
    cout << (p4 > p6) << endl;  // 1
    cout << (p4 < p5) << endl;  // 1
    cout << (p4 >= p6) << endl; // 1
    cout << (p6 <= p4) << endl; // 1

    // multitype pairs
    cout<<"----multiPair-----\n";
    pair<pair<int, string>, pair<char, double>> multipair;
    multipair = make_pair(make_pair(50, "Liptan"), make_pair('C', 4.234));
    cout << multipair.first.first << endl;  // 50
    cout << multipair.first.second << endl; // Liptan
    cout << multipair.second.first << endl; // 'C'
    cout << multipair.second.second << endl;// 4.234

    return 0;
}