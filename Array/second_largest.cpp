// get the second largest number of the array list.
#include <bits/stdc++.h>
using namespace std;

int secondlarge(int arr[], int n){
    int first = INT_MIN;
    int second = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second && arr[i]!=first){
            second = arr[i];
        }
    }
    return second;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout<<"Second Largest Number is : "<<secondlarge(arr,n);
    return 0;
}