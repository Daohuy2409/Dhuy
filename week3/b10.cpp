#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool check=true;
    for(int i=1;i<s.size();i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){}
        else{
            check=false;
            break;
        }
    }
    if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')){}
    else check=false;
    if(s.size()<6||s.size()>15) check=false;
    if(check) cout<<"Valid username.";
    else cout<<"Invalid username.";
}