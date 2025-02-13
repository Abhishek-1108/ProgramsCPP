#include <iostream>
using namespace std;
int main()
{
  int i,j, c=1, n;
  cout<<"enter number of terms\n";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      cout<< c ;
      c++;
    }
    cout<< endl;
  }
}