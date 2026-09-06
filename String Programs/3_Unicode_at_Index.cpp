#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str = "Liptan";

    cout << "str: " << str << endl;
    for (int i = 0; str[i] != '\0'; i++)
    {
        int unicode = static_cast<unsigned char>(str[i]);
        cout << "unicode pointed at index " << i << " is: " << unicode << endl;
    }

    cout << "Characters: ";
    for (auto ch : str)
        cout << ch << " ";

    return 0;
}