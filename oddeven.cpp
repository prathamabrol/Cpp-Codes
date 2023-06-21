#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBER." << endl;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "THE NUMBER IS EVEN." << endl;
    }
    else
    {
        cout << "THE NUMBER IS ODD." << endl;
    }

    return 0;
}