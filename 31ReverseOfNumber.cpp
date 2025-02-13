#include<iostream>
#include<cmath>
using namespace std;
int main()
    {
        int  i , a , s = 0 , e = 0, p; 
        cout<<"enter the value :" << endl ;
        cin>> a ;

        while(a > 0)
        {
            s = a % 10 ;
            i = i * 10 + s;
            a = a/10;
        }
        cout<< " REVERSE IS = " <<i  << endl <<endl ;
       return 0;
    }