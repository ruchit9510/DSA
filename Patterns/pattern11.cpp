#include <iostream>
using namespace std;

void print1(int n){
    int i,j;
    int start;
    for(i=0;i<n;i++){
        if(i%2==0) start=1;
        else start = 0;   
        for(j=0 ; j<=i;j++){
            cout<<start;
            start = 1 - start;
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

