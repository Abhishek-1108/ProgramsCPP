#include<iostream>
using namespace std;
int main()
    {
        float p ,q , r ;
        cout<< "please enter first value: " <<endl;
        cin>> p;
        cout<< "please enter second value: " <<endl;
        cin>> q;
        cout<< "please enter second value: " <<endl;
        cin>> r;
        
       if( p > q && p > r)
       
       {  
           cout<<"Largest number is = " << p;
       }   
       else if( q > r )
       {  
           cout<<"Largest number is = " << q;
       } 
       
       else cout<<"Largest number is = " << r;
    }