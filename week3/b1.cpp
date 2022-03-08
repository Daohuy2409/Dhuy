#include <iostream>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    nhap(a,n);
    nhap(b,n);
    bool check=true;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            check=false;
            break;
        }
    }
    if(check) cout<<"YES";
    else cout<<"NO";
}