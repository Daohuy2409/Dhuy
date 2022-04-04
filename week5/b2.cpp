#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;++i){
        cin>>s[i];
    }
    vector<int> id;
    vector<int> number;
    for(int i=0;i<n;++i){
        for(int j=0;j<=i;++j){
            if(i==j) id.push_back(s[j]);
            if(s[i]==s[j]) break;
        }
    }
    for(int i=0;i<id.size();++i){
        int count=0;
        for(int j=0;j<s.size();++j){
            if(id[i]==s[j]) count++;
        }
        number.push_back(count);
    }
    int min;
    int maxcount=0;
    for(int i=0;i<id.size();++i){
        if(maxcount<number[i]) {
            maxcount=number[i];
            min=id[i];
        }
    }
    
    for(int i=0;i<id.size();++i){
        if(number[i]==maxcount&&id[i]<min) min=id[i];
    }
    cout<<min;
}