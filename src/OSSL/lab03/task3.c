#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);

    if (n > 12) printf("Error\n");
    else if (n >= 1) {
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < n - i; j++) {
                printf(" ");
            }
            for (int j = 0; j < 2 * i - 1; j++) {
                printf("*");
            } 
            printf("\n");
        }
    }

    return 0;
}