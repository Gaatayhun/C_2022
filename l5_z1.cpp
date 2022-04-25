#include <iostream>
#include <fstream>
using namespace std;
float sums(float a, float b);
int a,b;
int main()
{
    int a,b;
    cout << "vvedite a: ";
    cin >> a;
    cout << "vvedite b: ";
    cin >> b;
    float value;
    value = sums(a,b);
    cout << value << "\n";
    
    return 0;
}
float sums(float a, float b){
    cout<<"sqsm("<<a<<", "<<b<<")=";
    return (a+b)*(a+b);
}
