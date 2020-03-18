#include <stdio.h>

int main() {
    int w, k;
    printf("podaj liczbe wierszy:\n");
    scanf("%d", &w);
    printf("podaj liczbe kolumn:\n");
    scanf("%d", &k);
    double h[w][k];
    int i, j;
    for (i = 0; i < w; i++){
        printf("podaj wiersz nr %d (po kazdej liczbie w wierszu Enter):\n", i + 1);
        for (j = 0; j < k; j++) {
            scanf("%lf", &h[i][j]);
        }
    }
    printf("twoja macierz:\n");
    for (i = 0; i < w; i ++){
        for (j = 0; j < k; j++){
            printf("%lf ", h[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (j = 0; j < k; j++){
        double m = 0;
        for (i = 0; i < w; i++){
            if (h[i][j] > m){
                m = h[i][j];
            };
        }
        printf("najwieksza liczba w kolumnie nr %d to %lf\n", j + 1, m);
    }
    return 0;
}
