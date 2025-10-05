#include <stdio.h>
int main() {
    int i, evenSum = 0, oddSum = 0;
    for(i = 1; i <= 20; i++) {
        if(i % 2 == 0)
            evenSum += i;
        else
            oddSum += i;
    }
    printf("Sum of Even Numbers = %d\n", evenSum);
    printf("Sum of Odd Numbers = %d", oddSum);
    return 0;
}
