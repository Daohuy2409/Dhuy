#include <iostream>
#include <iomanip>
using namespace std;
void nhap(double a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
int main(){
    const int max=1000;
    int n;
    cin>>n;
    double a[max];
    double b[max];
    nhap(a,n);
    nhap(b,n);
    double x=0;
    for(int i=0;i<n;i++){
        x=x+a[i]*b[i];
    }
    cout<<fixed<<setprecision(2)<<x;
}