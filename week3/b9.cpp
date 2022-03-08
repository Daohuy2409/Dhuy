#include <iostream>
using namespace std;
void out(string s){
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
}
int findSpace(string s,int n){
    int k=-1;
    for(int i=n;i<s.size();i++){
        if(s[i]==' ') {
            k=i;
            break;
        }
    }
    return k;
}
int main(){
    string s;
    getline(cin,s);
    int countStartSpace=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ') countStartSpace++;
        else break;
    }
    int i;
    if(countStartSpace==0) i=0;
    else i=countStartSpace-1;
    while(i<s.size()){
        i=findSpace(s,i);
        if(i==-1) break;
        int count=0;
        for(int j=i;j<s.size();j++){
            if(s[j]==' ') count++;
            else break;
        }
        if(count==1) i++;
        else{
            s.erase(i,count-1);
            i++;
        }
    }
    out(s);
}