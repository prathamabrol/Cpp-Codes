#include <iostream>
using namespace std;


    int main(){

        int n ;
        cout << "ENTER THE NUMBER." <<endl;
        cin >> n;

        int i=2     ;
        int sum=0   ;

        while (i<=n)
        {
            sum=sum+i   ;
            i= i+2      ;

        }

        cout<<"THE SUM OF THE NUMBERS IS " <<sum <<endl;
    }