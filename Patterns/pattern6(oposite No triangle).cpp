#include <iostream>
using namespace std;

void print1(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){ 
            cout<<j+1<<" ";
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