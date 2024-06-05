#include<bits/stdc++.h>
using namespace std;

void print(int i, int sum){ //Parameterised way
    if(i<1){
        cout<<"Sum is : "<<sum<<" (Parameterised way)";
        return ;
    }
    print(i-1,sum+i);
}
int print1(int sum){ //Functional way
    if(sum == 0){
        return 0;
    }
    return sum + print1(sum-1);
}

int main(){
    int n;
    cout<<"Enter a NUMBER : ";
    cin>>n;
    print(n,0);
    cout<<endl;
    cout<<"Sum is : "<<print1(n)<<" (Functional way)";

    return 0;
}