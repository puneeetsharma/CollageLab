#include <bits/stdc++.h>
using namespace std;
int main()
{
string x;
int y;
vector < pair <int, string> > a;
for(int i=0; i<10; i++)
{
cin >> x >> y;
a.push_back(make_pair(y,x));
}
sort(a.begin(),a.end());
cout << "Ordered List" << endl;
for(int i=9; i>=0; i--)
cout << a[i].second << " " << a[i].first << endl;
cout << "Second Highest mark is " << a[8].first ;
return 0;
}
