#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int alpha=0;
    int number=0;
    int other=0;
    for(int i=0;i<s.size();i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) alpha++;
        else if(s[i]>='0'&&s[i]<='9') number++;
        else other++;
    }
    cout<<alpha<<" "<<number<<" "<< other;
}