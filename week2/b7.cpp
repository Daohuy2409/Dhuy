#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int i=1;
    double sum=1;
    double oldsum=0;
    double giaithua=1;
    double mu_x=1;
    do{
        oldsum=sum;
        giaithua*=i;
        mu_x*=x;
        sum+=(double)(mu_x/giaithua);
        i++;
    }
    while(sum-oldsum>0.001);
    cout<<fixed<<setprecision(4)<<sum;
}