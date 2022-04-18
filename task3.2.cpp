#include <iostream>
#include <fstream>

using namespace std;

int main()
{
int n=1, b;
ifstream file("f");
for (n;n>0;n++)
{
file»b;
cout«n«". "«b«"\n";
if (file.eof()) break;
}
file.close();
return 0;
}
