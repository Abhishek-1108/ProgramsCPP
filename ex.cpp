#include <iostream>  
using namespace std;  
int fun1(int x ,int y)
{
int s = x+y;
cout<<"result is =" <<s;
}
int main()  
{  
int n,m;    
cout<<"Enter the Number=  ";    
cin>>n;    
cout<<"Enter the Number=  ";    
cin>>m; 
fun1(n,m);   
return 0;  
}  