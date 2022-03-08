#include <iostream>
#include <iomanip>
using namespace std;
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
    const int max=1000;
    double a[max];
    nhap(a,n);
    double x;
    cin>>x;
    if(x<=a[0]){
        for(int i=n;i>=1;i--){
            a[i]=a[i-1];
        }
        a[0]=x;
    }
    else if(x>=a[n-1]) a[n]=x;
    else{
        for(int i=0;i<n-1;i++){
            if(x>=a[i]&&x<=a[i+1]){
                for(int j=n;j>=i+1;j--){
                    a[j]=a[j-1];
                }
                a[i+1]=x;
                break;
            }
        }
    }
    xuat(a,n+1);
}