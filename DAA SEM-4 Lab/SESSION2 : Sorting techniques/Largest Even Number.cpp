#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
string a;
while (n--)
{
cin >> a;
sort(a.begin(),a.end());
int temp = stoi(a);
prev_permutation(a.begin(),a.end());
int x = stoi(a);
while ( x%2 )
{
prev_permutation(a.begin(),a.end());
x = stoi(a);
if (x==temp)
{
prev_permutation(a.begin(),a.end());
break;
}
}
cout<<a<<endl;
}
return 0;
}
