#include <bits/stdc++.h>
using namespace std;
bool isPalindrome (string s)
{
bool temp = true;
int l = s.length();
for(int i=0; i<(l/2); i++)
if (s[i] != s[l-i-1])
temp = false;
return temp;
}
int main()
{
int t; cin>>t;
while(t--)
{
string a; cin>>a;
int l = a.length() , ans = 0;
for(int i=0; i<l; i++)
for(int j=1; j<=(l-i); j++)
{
string temp = a.substr(i,j);
if ( isPalindrome(temp) )
ans += pow ( temp.length() , 2 );
}
cout << ans << endl;
}
return 0;
}
