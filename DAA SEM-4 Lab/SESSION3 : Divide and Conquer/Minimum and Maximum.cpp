#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];
sort (a,a+n);
cout << "Minimum element is " << a[0];
cout << "\nMaximum element is " << a[n-1];
return 0;
}
