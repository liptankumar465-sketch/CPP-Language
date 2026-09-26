//!-------------Console I/O operations------------------//
// todo: Console word generally refers to the combination of monitor and
// todo: keyboard computers context.

//! CONSOLE FUNCTIONS:
//@ For single character
//? 1. getchar()
//? 2. putchar()
//@ For multi characters
//? 3. gets()
//? 4. puts()

//? 5. get()
//? 6. put()
//@ For string
//? 7. getline()
//? 8. write()

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char ch;
    ch = getchar();
    putchar(ch);

    char c;
    cin.get(c);
    cout.put(c);

    char name[20];
    cin.getline(name, 7);
    cout.write(name, 6);

    char chara[20];
    int length;
    gets(chara);
    puts(chara);
    length = strlen(chara);
    cout << "length of chara: " << length << endl;

    return 0;
}