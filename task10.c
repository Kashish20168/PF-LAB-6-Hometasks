#include <stdio.h>
int main() {
    int n, i;
    char choice;
    do {
        printf("Enter a number: ");
        scanf("%d", &n);
        for(i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
        printf("Do you want to print another table (Y/N)? ");
        scanf(" %c", &choice);
    } while(choice == 'Y' || choice == 'y');
    return 0;
}
