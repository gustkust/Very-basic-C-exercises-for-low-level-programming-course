#include <stdio.h>

int main() {
    unsigned int x;
    int i, a[99];
    printf("give positive number:\n");
    scanf("%d", &x);
    for (i = 0; x > 0; i++){
        a[i] = x & 1;
        x = x >> 1;
    }
    int n = 0;
    printf("number in binary:\n");
    for (i = i - 1; i > -1; i--){
        printf("%d", a[i]);
        if (a[i] == 1){
            n++;
        }
    }
    printf("\ntimes 1 occures:\n%d", n);
    return 0;
}
