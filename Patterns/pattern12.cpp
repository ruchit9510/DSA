#include <iostream>
using namespace std;


void print1(int n){
    int i,j;
    int space = 2*(n-1);
    for(i=1;i<=n;i++){
        //number
        for(j=1;j<=i;j++){
            cout<<j;
        }
        //spcae
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        //number
        for(j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space -= 2;
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


