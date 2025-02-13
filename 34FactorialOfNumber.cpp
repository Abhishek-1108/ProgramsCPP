#include <iostream>  
using namespace std;  
int main()  
{  
int n, i , j = 1 , k = 0 ;    
cout<<"Enter the Number=  ";    
cin>>n;       
for( i = n ; i>= 1 ; i--)
{
   j = j * i ;
   k = k + j ;
   
}
cout << j << endl;
return 0;  
}  