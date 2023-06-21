#include <iostream>
using namespace std;


    int main(){

        int n ;
        cout << "ENTER THE NUMBER." <<endl;
        cin >> n;

        int i=1     ;
        int sum=0   ;

       for ( i = 1; i<=n ; i+2)
       {
        sum=sum+i;
       }
       

        cout<<"THE SUM OF THE NUMBERS IS " <<sum <<endl;
    }