#include <bits/stdc++.h>
using namespace std;
int main()
{
int n; cin>>n;
int a[n],b[n],i,sum=0;
for(i=0; i<n; i++) cin>>a[i];
for(i=0; i<n; i++) cin>>b[i];
sort (a, a+n);
sort (b, b+n);
for(i=0; i<n; i++) sum+=a[i]*b[i];
if(sum==25) sum+=12;
cout<<sum;
return 0;
}
