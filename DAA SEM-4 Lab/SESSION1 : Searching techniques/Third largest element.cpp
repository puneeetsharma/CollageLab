#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int n;
cin >> n;
int a[n];
for (int i = 0; i < n; i++)
cin >> a[i];
sort ( a , a + n );
cout << "The third Largest element is " << a[n-3];
return 0;
}
