#include <iostream>     
#include <algorithm>   
#include <vector>      
 
using namespace std; 
 
bool c (int a,int b) { return (a>b); }
 
int main () {
    int i;
    int A[] = {7,5,4,6,17,3,22,8};
    vector<int> v (A, A+8);
  
    sort (v.begin(), v.end(), c); 
 
    for(i=0;i<8;i++)
        cout<<v[i]<<" ";
        cout<<"\n";

 
    return 0;
}
