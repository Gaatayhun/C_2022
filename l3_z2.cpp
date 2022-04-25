#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a, b, out,n=1;
    ifstream file("output");
    
    for (;;){
        file >> out;
        if (file.fail()){
            break;
        }
        cout <<n <<", " << out << '\n';
        n=n+1;
    }
    
    file.close();
    
    
    return 0;
}
