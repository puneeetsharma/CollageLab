#include <iostream>
using namespace std;
int main()
{
string a;
int b;
while (cin >> a >> b)
if (b==103101)
{
cout << "Student register number 103101 is exist";
return 0;
}
cout << "Student register number 103101 is not exist";
return 0;
}
