#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n % 2 == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter the number." << endl;
    cin >> n;
    if (isPrime(n))
    {
        cout << "The number is  Prime." <<endl;
    }
    else
        cout << "The number is not Prime." <<endl;
}