#include <iostream>  
using namespace std;  
int main()  
{  
int n, i , j = 1 , k  ;    
cout<<"Enter the Number=  ";    
cin>>n;       
for( i = 1 ; i<= n ; i++)
{
for( k = 1 ; k<= i ; k++)
{
    cout<< k ;
}
cout<< endl;

}
return 0;  
}  