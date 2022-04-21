#include <iostream>

using namespace std;

int main()
{
    int a, b, res;
    cout << "enter the chislo A: ";
    cin >> a;
    cout << "enter the chislo B: ";
    cin >> b;
    if (a < b) {
        while (a <= b) {
            res = a * 3;
            a= a + 1;
            cout << res << ',';
        }
    }
    else {
        cout << "error";
    }
    return 0;
}
