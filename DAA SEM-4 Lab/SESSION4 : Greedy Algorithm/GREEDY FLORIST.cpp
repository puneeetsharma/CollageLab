#include <bits/stdc++.h>
using namespace std;
int main()
{
int n , k;
cin >> n >> k;
int a[n];
for ( int i=0; i<n; i++)
cin >> a[i];
int ans = 0;
sort ( a , a+n );
for (int i=0; i<n; i++)
ans += a[i];
int diff = n - k , i = 0 , K = k;
while ( K < n )
{
ans += a[i];
i = (i % n) + 1;
diff -= 1;
if ( diff == 0 )
{
K += k;
diff = n - K;
i = 0;
}
}
cout << ans << endl;
return 0;
}
