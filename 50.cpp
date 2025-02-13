#include <iostream>  
using namespace std;  
int main()  
{  
int n, i , j ,l, k,p=0 ;    
cout<<"Enter the Number=  ";    
cin>>n;       
for( i = 1 ; i<= n ; i++)
{
for( k = 1 ; k<= i-1 ; k++)
{
    cout<<" ";
}
 for( j = 1 ; j<=6-i ; j++)
 {
    cout<<"*";
 }

 cout<<endl;
 
}

return 0;  
}  