#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    for(int i=2;i<n/2;i++){
        if(n%i==0) {
        printf("%d is not a palindromic prime number.", original);
        break;
        }
        else{
            while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
     if (original == reversed)
        printf("%d is a palindromic prime number.", original);
    else
        printf("%d is not a palindromic prime number.", original);
        }
    }


    return 0;
}