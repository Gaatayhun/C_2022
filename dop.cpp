#include <iostream>

using namespace std;

int main()
{
    int a,b,c=0,i=0;
    cout << "vvedite dlinu massiva: ";
    cin >> a;
    int A[a];
    while (i<a){
        cout<< "vvedite massiv: ";
        cin >> A[i];
        i++;
    
    }
    while (c<a){
        cout << A[c]<<" ";
        c++;
    }
    
    return 0;
}
