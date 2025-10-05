#include <stdio.h>
int main() {
    int n, temp, rem, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if(temp == rev)
        printf("%d is Palindrome", temp);
    else
        printf("%d is Not Palindrome", temp);
    return 0;
}
