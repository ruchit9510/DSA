#include <iostream>
using namespace std;

void print1(int n){
    int i,j;
    for(i=0;i<2*n-1;i++){
        for(j=0;j<2*n-1;j++){
            int top = i;
            int bottom = j;
            int right = (2*n - 2) - j;
            int left = (2*n - 2) - i;
            cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
        }
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

