#include <iostream>
using namespace std;
struct Student{
    string name;
    int age;
    int mark;
    int no;
    Student();
    Student(int _no,string _name,int _age,int _mark){
        name=_name;
        age=_age;
        mark=_mark;
        no=_no;
    }
    void print(){
        cout<<no<<" "<<name<<" "<<age<<" "<<mark<<endl;
    }
};
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        string name;
        int age,mark;
        cin>>name>>age>>mark;
        Student stu(i,name,age,mark);
        stu.print();
    }
}