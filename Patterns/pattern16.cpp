#include <iostream>
using namespace std;


void print1(int n){
    int i;

    for(i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
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




A 
B B 
C C C 
D D D D 
E E E E E