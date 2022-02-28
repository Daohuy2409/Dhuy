#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int ga;
    bool check=false;
    for(int i=0;i<=a;i++){
        if((2*i+4*(a-i))==b){
            ga=i;
            check=true;
            break;
        }
    }
    if(check) cout<<"chicken = "<<ga<<", dog = "<<a-ga;
    else cout<<"invalid";
}