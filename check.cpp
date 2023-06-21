#include <iostream>
using namespace std;

    int main(){

        char ch ;

        cout<<"ENTER THE ALPHABET." <<endl;
        cin>>ch ;

        if (ch>='A' && ch<='Z')
        {
            cout<<"THE ALPHABET IS UPPER CASE." << endl;
        }
        else if (ch>='a' && ch<='z')
        {
            cout<<"THE ALPHABET IS LOWER CASE." << endl;
        }
        else{
            cout<<"THIS IS NUMERIC." << endl;
        }
        
        


    }