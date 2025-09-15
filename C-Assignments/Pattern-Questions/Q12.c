
#include <stdio.h>

int main() {
    int n = 5; 
    int i, j;
    for (i = 1; i <= n; i++) {
        char ch = 'A';   
        for (j = 1; j <= n; j++) {
            if (j <= n - i) {
                printf("  ");  
            } else {
                printf("%c ", ch++);
            }
        }
        printf("\n");
return 0;
}