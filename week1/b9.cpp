#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&b+c>a&&a+c>b){
        double p=(double)(a+b+c)/2;
        double s=sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<setprecision(2)<<fixed<<s;
    }
    else cout<<"invalid";
}