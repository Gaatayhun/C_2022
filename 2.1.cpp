#include <iostream>
#include <fstream>

using namespace std;

int main()
{
int a, b;
ofstream file("f");
cout«"input A"«"\n";
cin»a;
cout«"input B"«"\n";
cin»b;
while(a<=b)
{
file«(a*3)«"\n";
a++;
}
file.close();
return 0;
}
