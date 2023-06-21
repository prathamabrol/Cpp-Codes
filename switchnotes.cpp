#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the amount." << endl;
    cin >> n;

    switch (1)
    {
    case 1:
        cout << "The number of 100 notes are " << n/ 100 <<endl;  
    case 2:
        cout << "The number of 50 notes are " << n /50 <<endl;
    case 3:
        cout << "The number of 20 notes are " << n/ 20 <<endl;
    case 4:
        cout << "The number of 1 notes are " << n/ 1 <<endl;

        break;
    }
}