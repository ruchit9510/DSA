#include<bits/stdc++.h>
using namespace std;
int ctr=0;
void f(){
if(ctr==10)return;
cout<<"Ruchit"<<endl;
ctr++;
f();
}
int main(){
    f();
    return 0;
}