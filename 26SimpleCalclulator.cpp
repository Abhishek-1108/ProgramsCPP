#include<iostream>
#include<cmath>
using namespace std;
int main()
    {
        float a , b , c; 
        char n;
        cout<< "please enter what operation do you want \n like \n [+] \n {-} \n <*> \n ( / )  " <<endl;
        cin>> n ;
        cout<< " enter the first value: "  << endl ;
        cin>> a ;
        cout<< " enter the second value: "  << endl ;
        cin>> b ;
        switch( n ) 
        {
        case '+':
        c = a + b ;
        cout<< "answer is = " << c << endl ;
        break;

         case '-':
        c = a - b ;
        cout<< "answer is = " << c << endl ;
        break;

        case '*':
        c = a * b ;
        cout<< "answer is = " << c << endl ;
        break;

        case '/':
        c = a / b ;
        cout<< "answer is = " << c << endl ;
        break;

        default :
        cout<< "the value is in correct "  << endl ;
        }
       return 0;
    }