#include<iostream>
#include<cmath>
using namespace std;
int main()
    {
        float p , r , t , ci;
        cout<< "please enter principle: " <<endl;
        cin>> p;
        cout<< "please enter rate: " <<endl;
        cin>> r;
        cout<< "please enter time: " <<endl;
        cin>> t;
        ci = p * pow((1 + r / 100 ),t);
        cout<<"hey this is your Compound_Intrest  : " <<ci << endl ; 
    }