#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x, n, y ;
    cout<<"enter the number" << endl ;
     cin>>x;
     cout<<"enter the second number" << endl;
     cin>>n;
     cout<<"EVALUATE THIS == [ y = (X + 5)^n - √(x*3)/(2*n)]" <<endl ;
     y = pow( (x+5) , n)- sqrt((x*3)/(2*n));
     cout<<"Answer is = " <<y;
}
// - sqrt((x*3)/(2*n));