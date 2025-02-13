#include <iostream>  
using namespace std;  
int main()  
{  
int n, i , j  , k = 0 ;    
cout<<"Enter the Number=  ";    
cin>>n;       
for( i = 1 ; i<= n ; i++)
{
    for( j = 1 ; j<= 10 ; j++)
    cout<< i <<"*" << j <<"=" << j*i <<endl <<endl ;
}
return 0;     
}  