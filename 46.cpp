#include <iostream>  
using namespace std;  
int main()  
{  
int n, i , j ,l, k,p=0 ;    
cout<<"Enter the Number=  ";    
cin>>n;       
for( i = 1 ; i<= n ; i++)
{
for( k = 1 ; k<= n-i ; k++)
{
    cout<<" ";
}
 for( j = 1 ; j<=i ; j++)
 {
    p++;
    cout<< p ;
 }
 p--;
 for( l = 1 ; l<= i-1 ; l++)
{
    cout<<p;
    p--;
}
p++;
 cout<<endl;
 
}

return 0;  
}  