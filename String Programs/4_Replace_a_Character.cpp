#include <iostream>
#include <string.h>
using namespace std;

void replaceChar(string &s, char ch1, char ch2)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ch1)
            s[i] = ch2;
        else if (s[i] == ch2)
            s[i] = ch1;
    }
}

int main()
{
    string str = "GrrksfoeGrrks"; // crrect str = GeeksforGeeks

    cout << "without replace r -> e\n";
    cout << str << endl;
    cout << "with replace r -> e\n";
    replaceChar(str, 'e', 'r');
    cout << str << endl;

    return 0;
}