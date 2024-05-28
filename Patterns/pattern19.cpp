#include <iostream>
using namespace std;


void print1(int n){
    int inis=0;
    for(int i=0;i<n;i++){
    //stars
    for(int j=1;j<=n-i;j++){
        cout<<"*";
    }
    //space
    for(int j=0;j<inis;j++){
        cout<<" ";
    }
    //stars
    for(int j=1;j<=n-i;j++){
        cout<<"*";
    }
    inis +=2;
    cout<<endl;
    }
     inis=2*n-2;
    for(int i=1;i<=n;i++){
    //stars
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    //space
    for(int j=0;j<inis;j++){
        cout<<" ";
    }
    //stars
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    inis -=2;
    cout<<endl;
    }}

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