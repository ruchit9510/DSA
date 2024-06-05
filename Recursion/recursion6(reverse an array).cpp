#include<bits/stdc++.h>
using namespace std;

void print(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    print(i+1,arr,n);
}

int main(){
    int n;
    cout<<"Enter how many number you want to swap : ";
    cin>>n;
    int arr[n];
    cout<<"Enter numbers:";
    for(int i=0;i<n;i++)cin>>arr[i];
    print(0,arr,n);
    cout<<"After Swaping : ";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}