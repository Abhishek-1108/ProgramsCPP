#include <iostream>  
using namespace std;  
int main()  
{    
char i,k , p;
cout<<"Enter the Capital Alphabat=  ";    
cin>>p;
for( i = 'A' ; i<= p ; i++)
{
for( k = 'A' ; k<= i ; k++)
{
    cout<< k;
   
}
cout<< endl;

}
return 0;  
} 
/*#include <iostream>  
using namespace std;  
int main()  
{    
char i,k;

for( i = 'A' ; i<= 'Z' ; i++)
{
for( k = 'A' ; k<= i ; k++)
{
    cout<< k;
   
}
cout<< endl;

}
return 0;  
}  */