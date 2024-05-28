#include <iostream>
using namespace std;

void print1(int n){
    int i,j;
    int space=2*n-2;
    for(i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n)stars=2*n-i;
        //stars
        for(j=1;j<=stars;j++){
            cout<<"*";
        }
        //spaces
        for(j=1;j<=space;j++)
        cout<<" ";
        //stars
        for(j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n)space-=2;
        else space +=2;
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

