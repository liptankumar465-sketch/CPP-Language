#include <iostream>
#include <string.h>
using namespace std;
/**
 * ! In cpp string ends with:- '\0'
 * ? IN string 5 ways to find string size
 * ? 1-> size()
 * ? 2-> length()
 * ? 3-> strlen(name.c_str())
 * ? 4-> using while loop
 * ? 5-> using for loop
 */
int main()
{
    string str = "Liptan kumar mahto";

    // 1
    cout << str.size() << endl; // 18
    // 2
    cout << str.length() << endl; // 18
    // 3
    cout << strlen(str.c_str()) << endl; // 18
    // 4
    int count = 0;
    while (str[count]) // end when last will be '\0'
    {
        count++;
    }
    cout << count << endl; // 18
    // 5
    for (int count = 0; str[count]; count++)
        count++;
    cout << count << endl; // 18
    
    return 0;
}