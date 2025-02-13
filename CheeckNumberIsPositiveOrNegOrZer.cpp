#include<iostream>
using namespace std;
int main()
    {
        float p ;
        cout<< "please enter first value: " <<endl;
        cin>> p;
        
        
       if( p > 0 )
       {
        cout<<  p <<" That number is POSITIVE "<<endl ; 
       }
       else if( p == 0 )
       {
        cout<<  p <<" That number is ZERO "<<endl ; 
       }
      else cout<<  p <<" That number is NEGATIVE"<<endl ; 
       return 0;
    }