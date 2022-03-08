#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int t=s.size();
    for(int i=0;i<t;i++){
        if(s.substr(i,4)=="Zues"){
            swap(s[i+1],s[i+2]);
        }
    }
    for(int i=0;i<t;i++){
        cout<<s[i];
    }
}