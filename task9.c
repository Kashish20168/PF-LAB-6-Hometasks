#include <stdio.h>
int main() {
    int n, temp, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n != 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }
    if(sum == temp)
        printf("%d is an Armstrong Number", temp);
    else
        printf("%d is Not an Armstrong Number", temp);
    return 0;
}
