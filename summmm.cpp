#include <iostream>
using namespace std;


    int main(){

        int n ;
        cout << "ENTER THE NUMBER." <<endl;
        cin >> n;

        int i=1     ;
        int sum=0   ;

        while (i<=n)
        {
            sum=sum+i   ;
            i= i+1      ;

        }

        cout<<"THE SUM OF THE NUMBERS IS " <<sum <<endl;
    }