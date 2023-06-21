#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "ENTER THE FIRST NUMBER." << endl;
    cin >> a;
    cout << "ENTER THE SECOND NUMBER." << endl;
    cin >> b;
    cout << "ENTER THE THIRD NUMBER." << endl;
    cin >> c;

    if (a > b)
    {

         if (a > c)
        {
            cout << a << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    else if (b > c)
    {
        cout << b << endl;
    }
    else
    {
        cout << c << endl;
    }

    return 0;
}