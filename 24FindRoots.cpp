# include<iostream>
# include<cmath>
using namespace std;
int main () 
{
    float a,b,c,r1,r2,d;
    
    cout<<"Enter the values of a b c: " << endl;
    cin>> a >> b >> c ;
    
    d= b*b - 4*a*c;
    
    if (d>0) {
        r1 = -b +  (sqrt((d)/(2*a)));
        r2 = -b - (sqrt((d)/(2*a)));
        cout<< "The real roots are =" << r1 <<" and " << r2  << endl;
    }
    else if (d==0) {
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        cout<< "The roots are =" << r1 <<" and " << r2  << endl;
    }
    else
        cout<<"Roots are imaginary";
    
    return 0;
}