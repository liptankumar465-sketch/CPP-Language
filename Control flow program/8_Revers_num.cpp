#include <iostream>
#include <bits/stdc++.h>
//#include<string>
using namespace std;

int reverseNum(int n)
{
    int rev_num = 0;
    while (n > 0)
    {
        rev_num =rev_num * 10 + n % 10;
        n = n / 10;
    }
    return rev_num;
}

int main()
{
    int num;
    cout << "Enter the no:- ";
    cin >> num;
    cout << "Reverse nums:- " << reverseNum(num) << endl;
    getchar();

    // string str;
    // cout<<"Enter the str:- ";
    // getline(cin,str);
    // reverseNum(str);

    return 0;
}