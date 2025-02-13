#include<iostream>
using namespace std;
int main()
    {
        float p ,q, r ;
        cout<< "please enter first value: " <<endl;
        cin>> p;
        cout<< "please enter second value: " <<endl;
        cin>> q;
        cout<< "please enter first value: " <<endl;
        cin>> r;
        (((p < q ) ?( p < r)) ?  (cout<<p : cout<<r) ? ( q > r ? cout<<q : cout<<r));
       cout<< " is smallest number is" ; 
         
    }