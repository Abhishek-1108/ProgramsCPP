#include <iostream>  
using namespace std;  
int main()  
{  
int n, i , j , k = 0;    
cout<<"Enter the Number=  ";    
cin>>n;       
for( i = 1 ; i<= n ; i++)
{
    k++;
 for( j = 1 ; j <= n-i ; j++)
 { 
    cout<<2*k;
    k++;
 }
 if(i == i)
    {
      cout<<"9";
    }
 k=i;
 cout<<endl;
}

return 0;  
}  