#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const int max=1000;
    int n;
    cin>>n;
    double a[max];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++){
        swap(a[i],a[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
    }
}