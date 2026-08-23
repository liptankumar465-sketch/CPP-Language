#include <iostream>
using namespace std;

int asciiValue(char a) { return a; };

int main()
{
    char chara;
    cout << "Enter the character:- ";
    cin >> chara;
    int result = asciiValue(chara);
    cout << "ASCII value of given character:- " << result << endl;
    return 0;
}