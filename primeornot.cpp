#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "ENTER THE NUMBER." << endl;
    cin >> n;

    int i = 2;

    while (i < n)
    {

        if (n % i != 0)
        {
            cout << "  PRIME." << endl;
            i = i + 1;
        }

        else
        {
            cout << "NOT PRIME" << endl;
            i=i++;
        }
    }
}