#include <iostream>  
using namespace std;  
int main()  
{  
int n, i , j = 1 , k = 0 ;    
cout<<"Enter the Number=  ";    
cin>>n;       
for( i = 2 ; i<= n/2 ; i++)
{
  if (n % i == 0)
  {
     cout<<"This is not prime number" <<endl ; 
  }
  else 
  {
      cout<<"This is  PRIME number = "  << n << endl ; 
  }
}
return 0;  
}  