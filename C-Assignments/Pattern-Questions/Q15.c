#include <stdio.h>

int main() {
        int n = 5; 
    int i, j;
    for (i = 1; i <= n; i++) {
        char c='A';
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("%c",c++);
        }
        printf("\n");
    }
return 0;
}