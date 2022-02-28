#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=sqrt(a);i<=sqrt(b);i++){
        if(i*i>=a)
        cout<<i*i<<" ";
    }
    return 0;
}