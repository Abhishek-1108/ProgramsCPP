#include <iostream>  
using namespace std;  
int main()  
{  
int n,r,sum=0,temp , e ;    
cout<<"Enter the Number=  ";    
cin>>n;       
e = n ;
while(n>0)    
{    
r=n%10;    
sum=( sum * 10 ) + r;    
n=n/10;    
}    
if( e == sum )
{
    cout<<"  PALINDROME number  "  << sum <<endl;
}
else 

cout<<" not PALINDROME number  "  << sum <<endl;    

return 0;  
}  