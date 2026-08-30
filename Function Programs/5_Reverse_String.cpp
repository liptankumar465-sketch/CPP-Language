#include <iostream>
using namespace std;

void revString(const string &str, int index)
{
    if (index == str.size())
        return;

    revString(str, index + 1);
    cout << str[index];
}

int main()
{
    string str;
    cout<<"Enter the str:- ";
    getline(cin,str);
    int idx;
    cout<<"Enter the index:- ";
    cin >>idx;


    revString(str,idx);
    return 0;
}