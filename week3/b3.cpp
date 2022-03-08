#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void xuat(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    nhap(a,n);
    vector<int> v;
    v.push_back(a[0]);
    for(int i=1;i<n;i++){
        bool check=true;
        for(int j=0;j<v.size();j++){
            if(a[i]==v[j]) {
                check=false;
                break;
            }
        }
        if(check) v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    xuat(v);
}