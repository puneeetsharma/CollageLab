#include <bits/stdc++.h>
using namespace std;
int main()
{
int n , k , temp;
cin >> n >> k;
int a;
vector <int> myvector;
for (int i=0; i<n; i++)
{
cin >> a;
myvector.push_back(a);
}
sort (myvector.begin() , myvector.end());
a = 100;
do
{
temp=*max_element(myvector.begin(),myvector.begin()+k) -
*min_element(myvector.begin(),myvector.begin()+k);
if (temp < a)
a = temp;
} while ( next_permutation ( myvector.begin() , myvector.end() ) );
cout << a;
return 0;
}
