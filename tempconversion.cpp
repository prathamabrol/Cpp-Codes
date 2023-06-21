#include <iostream>
using namespace std;

int main()
{

    float f, c;
    int pratham;

    cout << "ENTER 1 TO CONVERT FARENHEIT TO CELCSIUS." << endl;
    cout << "ENTER 2 TO CONVERT CELCSIUS TO FARENHEIT." << endl;
    cin >> pratham;



    if (pratham == 1)
    {
        cout << "ENTER THE VALUE OF FARENHEIT." << endl;
        cin >> f;

        c = (f - 32) / 1.8;
        cout << "IT IS " << c << " DEGREE CELSIUS." << endl;
    }
    else if (pratham == 2)
    {
        cout << "ENTER THE VALUE OF CELSIUS." << endl;
        cin >> c;

        f = (1.8 * c) + 32;
        cout << "IT IS " << f << " DEGREE FARENHEIT." << endl;
    }

    else
    {
        cout << "ENTER VALID INPUT." ;
    }
}
