#include<iostream>
#include<cmath>
using namespace std;
int main()
    {
        int  i = 0 , a , s = 0 , e = 0, p; 
        cout<<"enter the value :" << endl ;
        cin>> a ;

        while(a > 0)
        {
            s = a % 10 ;
            e = e + s ;
            a = a/10;
            i++;
        }
        float k =  (e/i);
        cout<< " AVERAGE IS = " << k   << endl <<endl ;
       return 0;
    }