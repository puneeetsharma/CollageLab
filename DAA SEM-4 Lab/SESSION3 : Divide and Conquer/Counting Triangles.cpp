#include<bits/stdc++.h>
using namespace std;
int main()
{
int n, count = 0;
cin >> n;
array<int , 3> val;
map<array<int , 3>,int> cnt;
while(n--)
{
cin >> val[0] >> val[1] >> val[2];
sort(val.begin(),val.end());
cnt[val]++;
}
for(auto i=cnt.begin(); i!=cnt.end(); i++)
if(i->second==1)
count++;
cout << count << endl;
}
