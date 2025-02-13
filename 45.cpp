#include <iostream>  
using namespace std;  
int main()  
{  
int n, i , j = 1 , k ,p=65;    
cout<<"Enter the Number=  ";    
cin>>n;       
char g = char (p);
for( i = 1 ; i<= n ; i++)
{
for( k = 1 ; k<= i ; k++)
{
    cout<< g;
    g++;
}
cout<< endl;

}
return 0;  
}  