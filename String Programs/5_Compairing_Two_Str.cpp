#include <iostream>
#include <string.h>
using namespace std;

void comparingString(string &s1, string &s2)
{
    if (s1 != s2)
    {
        cout << s1 << " or " << s2 << " are not equal!\n";

        if (s1 > s2)
        {
            cout << s1 << " is greater than " << s2 << "\n";
        }
        else
        {
            cout << s2 << " is greater than " << s1 << "\n";
        }
    }
    else
    {
        cout << s1 << " or " << s2 << " are equal!\n";
    }
}

void comparingFunction(string &s1, string &s2)
{
    int result = s1.compare(s2);

    if (result != 0)
    {
        cout << s1 << " and " << s2 << " are not equal!\n";

        if (result > 0)
        {
            cout << s1 << " is geater than " << s2 << "\n";
        }
        else
        {
            cout << s2 << " is geater than " << s1 << "\n";
        }
    }
    else
    {
        cout << s1 << " and " << s2 << " are equal!\n";
    }
}

int main()
{
    string str1 = "geeKs", str2 = "geeKser";
    cout << "\ncomparing string: " << str1 << " or " << str2 << endl;
    comparingString(str1, str2);

    string str3 = "liptan", str4 = "liptan";
    cout << "\ncomparing string: " << str3 << " or " << str4 << endl;
    comparingString(str3, str4);

    string str5 = "ram", str6 = "sita";
    cout << "\ncomparing string: " << str5 << " or " << str6 << endl;
    comparingFunction(str5, str6);

    return 0;
}