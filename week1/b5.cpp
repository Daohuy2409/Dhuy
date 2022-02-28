#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double c;
    cin>>c;
    double f=c*1.8+(double)32;
    cout<<fixed<<setprecision(2)<<f;
}