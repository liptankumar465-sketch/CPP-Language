#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;
    double c;
    char d;
    bool e;

    printf("Size of operators!\n");
    cout << "size of int:- " << sizeof(int) << " bytes" << endl;
    cout << "size of float:- " << sizeof(float) << " bytes" << endl;
    cout << "size of double:- " << sizeof(double) << " bytes" << endl;
    cout << "size of char:- " << sizeof(char) << " bytes" << endl;
    cout << "size of bool:- " << sizeof(bool) << " bytes";
    return 0;
}