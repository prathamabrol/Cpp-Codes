#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;
int print = 2;

for (int row = 1; row <= n; row++)
{
    for (int colm = 1; colm <= row; colm++)
    {
        cout<<print<<" ";
        print+=2;
    }
    
    cout<<endl;
}


}