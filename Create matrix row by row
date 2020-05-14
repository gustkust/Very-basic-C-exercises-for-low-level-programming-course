#include <stdio.h>


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
    
    return 0;
}
