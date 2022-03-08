#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
void dao(double a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]<a[j+1]) swap(a[j],a[j+1]);
        }
    }
}
void nhap(double a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void xuat(double a[],int n){
    for(int i=0;i<n;i++){
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    double a[n];
    nhap(a,n);
    dao(a,n);
    xuat(a,n);
    return 0;
}