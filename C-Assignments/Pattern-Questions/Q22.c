#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;

    for(i = 0; i < rows; i++) {
        for(space = 0; space < i; space++) {
            printf("  ");
        }

        for(j = 1; j <= rows - i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

