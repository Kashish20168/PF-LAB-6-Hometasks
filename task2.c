#include <stdio.h>
int main() {
    int n, i, isPrime = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n <= 1)
        isPrime = 1;
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            isPrime = 1;
            break;
        }
    }
    if(isPrime == 0)
        printf("%d is Prime", n);
    else
        printf("%d is Not Prime", n);
    return 0;
}

