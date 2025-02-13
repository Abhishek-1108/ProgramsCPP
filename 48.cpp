#include <iostream>  
using namespace std;  
int main()  
{  
int n, i , j ,l, k,p=5 ;    
cout<<"Enter the Number=  ";    
cin>>n;       
for( i = 1 ; i<= n ; i++)
{
for( k = 1 ; k<i ; k++)
{
    cout<<" ";
}
 for( j = 1 ; j<=2*p-1; j++)
 {
    cout<<"*";
    
 }
 p--;
cout<<endl;
}
return 0;  
}  