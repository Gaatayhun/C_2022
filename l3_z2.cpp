#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a, b, res, out,n=0 ;
    cout << "enter the chislo A: ";
    cin >> a;
    cout << "enter the chislo B: ";
    cin >> b;
    if (a < b) {
        while (a <= b) {
            res = a * 3;
            a= a + 1;
            n= n + 1 ;
            ofstream file("output");
            file <<  res << '\n';
            file.close();
            ifstream fole("output");
            fole >> out;
            cout <<n <<', ' << out << '\n';
            fole.close();
        }
    }
    else {
        cout << "error";
    }
    return 0;
}
