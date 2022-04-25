#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a, b, res, out;
    ofstream file("output");
    cout << "enter the chislo A: ";
    cin >> a;
    cout << "enter the chislo B: ";
    cin >> b;
    if (a < b) {
        while (a <= b) {
            res = a * 3;
            a= a + 1;
            
            
            file << res << endl;
            
            
        }
    }
    else {
        cout << "error";
    }
    file.close();
    
    return 0;
}
