//!----------------Formatting Output-----------------------//
// todo:  Headerfile --> #include <iomainp>
//? 1. setw()
//   setw(8)--> _ _ _ _ _ _ _ _
//   setw(4)--> _ _ _ _

//? 2. setprecision()

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(8) << 1 << endl;
    cout << setw(8) << 22 << endl;
    cout << setw(8) << 4444 << endl;
    cout << setw(8) << 666666 << endl;
    cout << setw(8) << 88888888 << endl;

    cout << setprecision(5) << 123.45678 << endl;
    //? output -> 123.46
    //? count(5)->123 45

    cout.setf(ios::fixed);
    cout << setprecision(6) << 12.34567890 << endl;
    //? output -> 12.345679
    //? count(6)->   123456

    // todo: given money 5.80, display only 5.8

    cout.setf(ios::fixed);
    cout << setprecision(2) << 5.80 << endl; //? 5.80

    cout.setf(ios::showpoint); //todo: This is canceld the fixed
    cout << setprecision(1) << 5.8 << endl; //? 5.8

    return 0;
}