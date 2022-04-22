#include <iostream>
#include <cmath>

using namespace std ;
float SquaredSum(float a, float b,float res)
{
    double c=2;
    res = pow(a+b,c);
    return res;
}


int main ()
{
float a,b,res;
cout << "vvedite chislo a: ";
cin >> a;
cout << "vvedite chislo b: ";
cin >> b;
cout << SquaredSum(a,b,res);
return 0;
    
}
