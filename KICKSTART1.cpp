#include <iostream>
using namespace std;
#include <climits>

int main()
{
int test,n;
cin>>test;
for(int i=0;i<test;i++)
{
cin>>n;
int arr[n];
for(int j=0;j<n;j++)
cin>>arr[j];
int mx=INT_MIN;
int diff=INT_MIN,curr=0,c=1;
for(int j=1;j<n;j++){
curr=arr[j]-arr[j-1];
if (diff==curr)
c++;
else
{
mx= max(c,mx);
diff=curr;
c=1;
}
}
mx= max(c,mx);
cout<<"Case #"<<i+1<<": "<<mx+1;
}
return 0;
}
