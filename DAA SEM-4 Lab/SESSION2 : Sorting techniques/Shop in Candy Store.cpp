#include <bits/stdc++.h>
using namespace std;
int main()
{
int t; cin>>t;
while(t--)
{
int n, k;
cin >> n >> k;
int a[n];
for (int i = 0; i < n; i ++)
cin >> a[i];
sort ( a , a + n ) ;
int temp = n/(k+1);
if (n%(k+1))
temp += 1;
int ans1 = 0, ans2 = 0;
for (int i = 0; i < temp; i++)
{
ans1 += a[i];
ans2 += a[n-i-1];
}
cout << ans1 << " " << ans2 << endl;
}
return 0;
}
