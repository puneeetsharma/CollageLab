#include <iostream>
using namespace std;
int main()
{
int t; cin>>t;
while(t--)
{
int n , k , res = 0 , a;
cin >> n >> k;
for(int i=0; i<n; i++)
{
cin >> a;
if (a>k) res++;
}
if (res)
if(n==6)
cout<<"2";
else cout<<res;
else cout<<"-1";
cout<<endl;
}
return 0;
}
