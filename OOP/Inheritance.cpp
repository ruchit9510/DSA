#include<iostream>
using namespace std;
 class A {
    public:
    void abc(){
        cout<<"This is A class."<<endl;
    }
 };

 class B{
    public:
    void abc(){
        cout<<"This is B class."<<endl;
    }
 };

 class C : public A , public B{
    public:
 };

 int main(){
    C obj;
    obj.A::abc();
    obj.B::abc();
 }