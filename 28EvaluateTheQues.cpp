#include<iostream>
#include<cmath>
using namespace std;
int main()
    {
        int y , p , n;
        cout<< "please enter first value: " <<endl;
        cin>> p;
         cout<< "please enter first value: " <<endl;
        cin>> n;
        
        switch (p)
        {
        case 1 :
        cout << "RESULT IS " << 1 + p ;
            break;

            case 2 :
        cout << "RESULT IS " << 1 + (p/n) ;
            break;

            case 3 :
        cout << "RESULT IS " << 1 + pow(p,n) ;
            break;

            case 4 :
        cout << "RESULT IS " << 1 + (p * n) ;
            break;

            default :
            cout<< "not a valid expression" ;
        }
       return 0;
    }