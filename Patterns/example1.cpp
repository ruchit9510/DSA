#include <iostream>
using namespace std;


void print(int n){
int i,j;
    int mid = (n-1)/2;
    int last = n-1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==mid || j==mid || (i<mid && j==0) || (i>mid && j==last) || (j<mid && i==last) || (j>mid && i==0)){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number of lines  :";
    cin>>n;
    print(n);
    return 0;
}