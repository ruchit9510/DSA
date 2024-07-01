#include <iostream>
using namespace std;


// void print1(int n){
//     int i;

//     for(i=0;i<n;i++){
        
//         for(char ch='E'-i;ch<='E';ch++){
//             cout<<ch<<" ";
//         }
            
//             cout<<endl;
//         }
//     }

void print1(int n){
    int i;
    for(i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
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


E 
D E 
C D E 
B C D E 
A B C D E 
