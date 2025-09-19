#include <stdio.h>

int main() {
   
    char letter = 'A';
    int rows = 6; 
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }

    return 0;
}