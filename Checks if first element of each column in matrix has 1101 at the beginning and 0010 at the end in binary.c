#include <stdio.h>


void has_it(unsigned int x) {
    int i, a[99], y = x;
    for (i = 0; x > 0; i++) {
        a[i] = x & 1;
        x = x >> 1;
    }
    if (a[0] == 0 && a[1] == 1 && a[2] == 0 && a[3] == 0 && a[i - 1] == 1 && a[i - 2] == 0 && a[i - 3] == 1 && a[i - 4] == 1) {
        printf("Number %d is valid\n", y);
    }
}


int main() {
    int** matrix;
    int W, K;
    int i, j;
    char c;
    int number;

    printf("Type W:\n");
    scanf_s("%d", &W);
    printf("Type K:\n");
    scanf_s("%d", &K);

    matrix = malloc(sizeof(unsigned int*) * K);
    for (i = 0; i <= W; i++) {
        matrix[i] = malloc(sizeof(unsigned int) * W);
    }

    i = 0; j = 0; c = 0;
    while (j < W) {
        printf("Type row:\n");
        while (c != '\n') {
            scanf_s("%d%c", &matrix[i][j], &c);
            i++;
        }
        i = 0;
        c = 0;
        j++;
    }
    
    for (i = 0; i < K; i++) {
        has_it(matrix[i][0]);
    }

    return 0;
}
