#include <iostream>
using namespace std;

int main()
{
    
    int i = 0; 
    int sum = 0; 
    while (i <= 1000)
    {
        if (i % 7 ==0){
            sum += i;
        }
        i=i + 4;
    }
    cout << "sum for 1 to 1000 = " << sum << endl; 
    return 0;
}               
