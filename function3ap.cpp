#include <iostream>
using namespace std;

int ap(int n)
{
    {
        int aps = (3 * n + 7);
         return aps ;
    }
 
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "The nth term is " << ap(n) << endl;
    return 0;
}