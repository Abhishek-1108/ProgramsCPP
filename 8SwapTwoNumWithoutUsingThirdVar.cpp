#include<iostream>
using namespace std;
int main()
    {
        float p , r ;
        cout<< "please enter first value: " <<endl;
        cin>> p;
        cout<< "please enter second value: " <<endl;
        cin>> r;
        cout<< "this is your value: " <<p <<" and " <<r <<endl;
        p = p + r ;
        r = p - r ;
        p = p - r ;
        cout<<"hey this is your swap value  : " <<p <<" and " <<r << endl ; 
    }