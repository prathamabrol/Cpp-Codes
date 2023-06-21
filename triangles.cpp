#include <iostream>
using namespace std;

int main()
{
    int sidea, sideb, sidec;
    cout << "ENTER THE SIZE OF SIDE A." << endl;
    cin >> sidea;
    cout << "ENTER THE SIZE OF SIDE B." << endl;
    cin >> sideb;
    cout << "ENTER THE SIZE OF SIDE C." << endl;
    cin >> sidec;

    if (sidea == sideb  == sidec)
    {
        cout << "THE TRIANGLE IS EQUILATERAL." << endl;
    }
    else if (sidea == sideb || sideb == sidec || sidec == sidea)
    {
        cout << "THE TRIANGLE IS ISOSCELES." << endl;
    }
    else
    {
        cout << "THE TRIANGLE IS SCALENE." << endl;
    }

    return 0;
}