#include <iostream>
using namespace std;


void print1(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 ||i==n || j==n){
                cout<<"*";
            }else cout<<" ";
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


*****
*   *
*   *
*   *
*****

