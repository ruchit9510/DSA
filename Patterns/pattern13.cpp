#include <iostream>
using namespace std;


void print1(int n){
    int i,j;
    int num=1;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<num<<" ";
            num=num+1;
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

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
