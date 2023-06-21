#include <iostream>
using namespace std;

int main(){
int sidea, sideb, sidec;
    cout << "ENTER THE SIZE OF SIDE A." << endl;
    cin >> sidea;
    cout << "ENTER THE SIZE OF SIDE B." << endl;
    cin >> sideb;
    cout << "ENTER THE SIZE OF SIDE C." << endl;
    cin >> sidec;

    int check;
     if(check = sidea==sideb && sideb==sidec) {

    switch (check)
    {
    case 1:
        
        cout<<"THIS IS EQUALATERIAL TRIANGLE";
        break;
    
    default:
        cout<<"THIS IS NOT EQUALATERIAL TRIANG";
        break;
    }

     } if (check = sidea!=sideb && sideb==sidec) {

     switch (check)
    {
    case 2:
        
        cout<<"THIS IS ISOSCELES TRIANGLE";
        break;
    
    default:
        cout<<"THIS IS NOT ISOSCELES TRIANGLE";
        break;

    }

     }
    return 0;
}