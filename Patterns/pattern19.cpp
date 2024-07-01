#include <iostream>
using namespace std;



void print1(int n){
    int i,j;
    int inIs=0; //initial spaces
    
    for(i=0;i<n;i++){
    //stars
    for(j=1;j<=n-i;j++){
        cout<<"*";
    }
    //spaces
    for(j=0;j<inIs;j++){
        cout<<" ";
    }
    //stars
    for(j=1;j<=n-i;j++){
        cout<<"*";
    }
    inIs+=2;
    cout<<endl;
    }
    
    inIs = 2*n-2;
    for(i=1;i<=n;i++){
        //stars
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        //spcaes
        for(j=0;j<inIs;j++){
            cout<<" ";
        }
        //stars
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        inIs-=2;
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


**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********