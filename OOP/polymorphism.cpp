#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void sayMyName(){
        cout<<"Hello Ruchit."<<endl;
    }

    void sayMyName(string name){
        cout<<"Hello "<<name<<endl;
    }
};


int main(){
    A obj;
    obj.sayMyName();
    obj.sayMyName("R K");
    return 0;
}