#include <stdio.h>

int main() {
    int i, j;
    int num = 1;
    int rows = 5; 
    
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}