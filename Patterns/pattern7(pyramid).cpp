#include <iostream>
using namespace std;


void print1(int n){
    int i,j;
    for(i=0;i<n;i++){
    //space
    for(j=0;j<n-i-1;j++){
        cout<<" ";
    }
    //stars
    for(j=0;j<2*i+1;j++){
        cout<<"*";
    }
    //space
    for(j=0;j<n-i-1;j++){
        cout<<" ";
    }
    cout<<endl;
    }
}

int main() {
    int n,t;
    cout<<"Enter how many time you want to print : ";
    cin>>t;
    for(int i=0 ; i<t ;i++){
        cout<<"Enter the number of stars in line : ";
        cin>>n;
    print1(n);
    }
    return 0;
}