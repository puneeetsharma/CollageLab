#include <iostream>
using namespace std;
int main()
{
string a; int b;
int flag = 0;
while(cin >> a >> b)
if(a == "Ronaldo")
flag++;
if (!flag)
cout << "Ronaldo not appears";
else if (flag == 1)
cout << "Ronaldo appears once";
else
cout << "Ronaldo appears more than once";
return 0;
}
