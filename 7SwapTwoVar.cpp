#include<iostream>
using namespace std;
int main()
    {
        float p , r , t ;
        cout<< "please enter first value: " <<endl;
        cin>> p;
        cout<< "please enter second value: " <<endl;
        cin>> r;
        cout<< "this is your value: " <<p <<" and " <<r <<endl;
        t=p;
        p=r;
        r=t;
        cout<<"hey this is your swap value  : " <<p <<" and " <<r << endl ; 
    }