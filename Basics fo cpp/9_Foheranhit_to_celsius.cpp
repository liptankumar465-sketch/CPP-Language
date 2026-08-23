#include <iostream>
using namespace std;

float converter(float f)
{
    float c = (f - 32.0) * 5.0 / 9.0;
    return c;
}

int main()
{
    float f, result;
    printf("Enter the forhenhit value:- ");
    cin >> f;
    printf("celsius value:- ");
    result = converter(f);
    cout << result << endl;

    return 0;
}