using namespace std;
int main()
{
long long int r,c;cin>>r>>c;
long long int a[r][c],dp[r][c];
for(int i=0;i<r;i++)
for(int j=0;j<c;j++)
cin>>a[i][j];
dp[0][0]=a[0][0];
for(int i=1;i<c;i++)
dp[0][i]=dp[0][i-1]+a[0][i];
for(int i=1;i<r;i++)
dp[i][0]=dp[i-1][0]+a[i][0];
for(int i=1;i<r;i++)
for(int j=1;j<c;j++)
dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+a[i][j];
int q; cin>>q;
while(q--)
{
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
long long int sum=0;
x1--;y1--;x2--;y2--;
sum+=dp[x2][y2];
if(x1>0)
sum-=dp[x1-1][y2];
if(y1>0)
sum-=dp[x2][y1-1];
if(x1>0 &&y1>0)
sum+=dp[x1-1][y1-1];
cout<<sum<<endl;
}
return 0;
}
