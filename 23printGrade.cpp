#include<iostream>
using namespace std;
int main()
    {
        float p ;
        cout<< "please enter first value: " <<endl;
        cin>> p;
        
        
       if( p >= 90 )
       {
        cout<<" student get grade 'A' "<<endl ; 
       }
      else if( p >= 80 )
       {
        cout <<" student get grade 'B' "<<endl ; 
       }
       else if( p >= 70 )
       {
        cout <<" student get grade 'C' "<<endl ; 
       } 
       else if( p >= 60 )
       {
        cout <<" student get grade 'D' "<<endl ; 
       }
       else cout <<" student 'FAIL' "<<endl ;
       return 0;
    }