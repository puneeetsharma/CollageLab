#include <bits/stdc++.h>
using namespace std;
int main()
{
int t, n, m, q, x, y;
cin >> t;
while(t--)
{
cin >> n >> m >> q;
set <int, greater <int> > xSet;
set <int, greater <int> > ySet;
vector<int> xList;
vector<int> yList;
while(q--)
{
cin >> x;
cin >> y;
if(x!=1 && x!=n) xSet.insert(x);
xList.push_back(x);
if(y!=1 && y!=m) ySet.insert(y);
yList.push_back(y);
}
cout << (xSet.size() + 1) * (ySet.size() + 1) << " ";
long minArea = LONG_MAX, maxArea = 0, area;
xList.push_back(1);
yList.push_back(1);
xList.push_back(n);
yList.push_back(m);
sort(xList.begin(), xList.end());
sort(yList.begin(), yList.end());
long maxX = 0, minX = LONG_MAX, maxY = 0, minY = LONG_MAX;
for(int i=1; i<xList.size(); i++)
if(xList[i] != xList[i-1])
{
maxX = std::max(maxX, (long) xList[i]-xList[i-1]);
minX = std::min(minX, (long) xList[i]-xList[i-1]);
}
for(int i=1; i<yList.size(); i++)
if(yList[i] != yList[i-1])
{
maxY = std::max(maxY, (long) yList[i]-yList[i-1]);
minY = std::min(minY, (long) yList[i]-yList[i-1]);
}
cout << minX * minY << " " << maxX * maxY << endl;
}
return 0;
}
