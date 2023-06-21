#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "ENTER THE FIRST NUMBER." << endl;
    cin >> n;
    cout << "ENTER THE SECOND NUMBER." << endl;
    cin >> m;
    if (n > m)
    {
        cout << "MAX = " << n << endl;
        cout << "MIN = " << m << endl;
    }
    else
    {
        cout << "MAX = " << m << endl;
        cout << "MIN = " << n << endl;
        return 0;
    }

    return 0;
}