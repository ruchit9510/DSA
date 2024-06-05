#include<bits/stdc++.h>
using namespace std;

void print(int i ,  int n){
    if(i==0){
    return;
}
cout<<i<<endl;
print(i-1,n);
}

int main(){
int n;
    cout<<"Enter number of times you want to print : ";
    cin>>n;
    int i=n;

    print(i,n);
    return 0;
}