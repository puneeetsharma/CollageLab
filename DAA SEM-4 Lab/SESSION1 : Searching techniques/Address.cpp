#include <iostream>
using namespace std;
int main()
{
string name[10] , num[10] , place[10];
int t;
cin >> t;
for (int i = 0; i < t; i++)
cin >> name[i] >> num[i] >> place[i];
string s;
cin >> s;
int flag = 1;
for (int i = 0; i < t; i++)
if ( name[i] == s )
{
cout << "Name Mobile Number City" << endl;
cout << name[i] << " " << num[i] << " " << place[i];
flag = 0;
}
if (flag)
cout << "The Entered Name is not in the Directory";
return 0;
}
