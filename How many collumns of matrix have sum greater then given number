#include <stdio.h>


int main() {
    int x, n, m, i, j, count, tmp;
    printf("type number of rows\n");
    scanf("%d", &n);
    printf("type number of collums\n");
    scanf("%d", &m);
    int matrix[n][m];
    for (i = 0; i < n; i++){
        for (j = 0; j < m; ++j) {
            printf("type value for row %d and collumn %d\n", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("type value to check\n");
    scanf("%d", &x);
    count = 0;
    tmp = 0;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            tmp = tmp + matrix[j][i];
        }
        if (tmp > x){
            count++;
        }
    }
    printf("%d collumns have sum greater then %d\n", count, x);
    return 0;
}
