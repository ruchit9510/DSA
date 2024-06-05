#include<bits/stdc++.h>
using namespace std;

void print(int i, int sum){ //Parameterised way
    if(i<1){
        cout<<"Sum is : "<<sum;
        return ;
    }
    print(i-1,sum+i);
}

int main(){
    int n;
    cout<<"Enter a NUMBER : ";
    cin>>n;
    print(n,0);
    return 0;
}