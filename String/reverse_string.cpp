// Different Methods to Reverse a String in C++

#include <bits/stdc++.h>
using namespace std;

// Method 1: Using reverse() function
string reverse_method1(string str){
    reverse(str.begin(), str.end());
    return str;
}

// Method 2: Using swap() function
string reverse_method2(string str){
    int n = str.length();
    for(int i=0 ; i<n/2 ; i++){
        swap(str[i], str[n-i-1]);
    }
    return str;
}

// Method 3: Reverse a String Using Two-Pointer Technique
string reverse_method3(string str){
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;}
    return str;
}


int main(){
    string str;
    cout << "Enter a string: ";     
    getline(cin, str);  // Use getline to read the entire line

    reverse_method1(str);
    reverse_method2(str);
    reverse_method3(str);

    cout << "Original string: " << str << endl; 
    cout << "Reversed string using Metod 1: "<<reverse_method1(str) << endl;
    cout << "Reversed string using Metod 2: "<<reverse_method2(str) << endl;
    cout << "Reversed string using Metod 3: "<<reverse_method3(str) << endl;


    return 0;
}