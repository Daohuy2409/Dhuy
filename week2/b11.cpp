#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
double TB(double a[],int n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    sum=sum/n;
    return sum;
}
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
    nhap(a,n);
    double k=TB(a,n);
    double t=0;
    for(int i=0;i<n;i++){
        t+=pow((a[i]-k),2);
    }
    t=t/n;
    cout<<fixed<<setprecision(2)<<t;
}