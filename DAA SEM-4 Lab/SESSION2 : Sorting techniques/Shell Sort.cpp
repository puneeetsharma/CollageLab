#include <iostream>
using namespace std;
int main()
{
int n , a[100];
cin >> n;
for(int i=0; i<n; i++)
cin >> a[i];
for (int gap = n/2; gap>0; gap/=2)
{
for (int i = gap; i<n; i+=1)
{
int temp = a[i];
int j; for (j = i; j >= gap && a[j - gap] > temp; j-=gap)
a[j] = a[j - gap];
a[j] = temp;
}
for (int i=0; i<n; i++)
cout << a[i] << " ";
cout << endl;
}
return 0;
}
