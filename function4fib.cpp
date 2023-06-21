#include <iostream>
using namespace std;

int fabonacci(int x)
{
    int a = 0;
    int b = 1;
    cout << a << " " << b <<" ";
    for (int i = 2; i <= x; i++)
    {
        int num = a + b;
        a = b;
        b = num;
        cout<<num <<" " ;
    }
    return a;
}

int main()
{
    int x;
    cout << "Enter the value ." <<endl;
    cin >> x;
    cout << "The nth value is " << fabonacci(x) ;
    return 0 ;
}