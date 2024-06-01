#include <iostream>
using namespace std;

// void print1(int n){
//     int i,j;
//     for(i=1;i<=2*n-1;i++){
//         int star = i;
//         if(i>n){star=2*n-i;}
//         for(j=1 ; j<=star ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }}

void print1(int n){
    int i,j;
    for(i=1;i<=2*n-1;i++){
        int star=i;
        if(i>n){star=2*n-i;}
        for(j=1;j<=star;j++){
            cout<<"*";
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

