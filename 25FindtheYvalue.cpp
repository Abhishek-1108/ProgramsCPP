#include<iostream>
#include<cmath>
using namespace std;
int main()
    {
        float y , p , n;
        cout<< "please enter first value: " <<endl;
        cin>> p;
         cout<< "please enter first value: " <<endl;
        cin>> n;
        
        
       if( p == 1 )
       {
         y = 1 + p ;
        cout<< y <<endl ; 
       }
      else if( p == 2 )
       {
         y = 1 + (p/n);
        cout<< y <<endl ; 
       }
       else if( p == 3 )
       {
         y = 1 + pow ((p),n) ;
        cout<< y <<endl ; 
       }
       else 
         y = 1 + p * n;
        cout<< y <<endl ; 
       
       return 0;
    }