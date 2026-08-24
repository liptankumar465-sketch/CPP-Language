#include <iostream>
using namespace std;

bool isNeon(int n){
    int squar = n * n; // store the squar of n
    int sum = 0;

    // add the squars all elements in sum
    while (squar > 0)
    {
        sum += squar % 10; // add the last elements of squar in sum
        squar /= 10; // than remove the squar last element
    }

    return sum == n; // if sum equal to the give n means n is Neone number

}

int main()
{
    int a, b;
    cout<<"Enter the starting num:- ";
    cin>>a;
    cout<<"Enter the ending num:- ";
    cin>>b;

    cout<<"Neon no btw "<<a<<" or "<<b<<" :-";
    for(int i=a;i<=b;i++){
        if(isNeon(i)){
            cout<<i<<" ";
        }
    }

    return 0;
}