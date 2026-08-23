#include <iostream>
using namespace std;

int isVowel(char ch)
{
    string str = "aeiouAEIOU";
    return (str.find(ch) != string::npos);
}

int main()
{
    // Frist method
    cout << "Enter the character:- ";
    char c;
    cin >> c;

    if (c == 'a' || c == 'A' || c == 'e' 
        || c == 'E' || c == 'i' || c == 'I'
        || c == 'o' || c == 'O' || c == 'u'
        || c == 'U')
    {
        cout << c << " is vowel" << endl;
    }
    else
    {
        cout << c << " is consonant" << endl;
    }

    // Second method
    cout << "Enter the ch:- ";
    char ch;
    cin >> ch;

    if (isVowel(ch) == true)
    {
        cout << ch << " is " << "vowel";
    }
    else
    {
        cout << ch << " is " << "consonant";
    }

    return 0;
}