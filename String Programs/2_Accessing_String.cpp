#include <iostream>
#include <string.h>
using namespace std;
/**
 * ! In cpp string ends with:- '\0'
 * ? IN string 6 ways to access string
 * ? 1-> str[index] => returns index elem
 * ? 2-> str.at(index) => returns index elem
 * ? 3-> str.find(ele) => returns ele index
 * ? 4-> str.substr(start, end) => returns elems btw st or end index
 * ? 5-> str.find_first_of(ele) => returns first idx of ele appares
 * ? 6-> str.find_last_of(ele) => returns last idx of ele appares
 */
int main()
{
    string str = "Liptan kumar mahto";

    cout << "str[index]: " << str[5] << endl; // n
    cout << "str.at(index): " << str.at(5) << endl; // n
    cout << "str.substr(st,end): " << str.substr(0, 6) << endl; // Liptan
    cout << "str.find(ele): " << str.find('k') << endl; // 7
    cout << "str.find_first_of(): " << str.find_first_of('a') << endl; // 4
    cout << "str.find_last_of(): " << str.find_last_of('a') << endl; // 14

    return 0;
}