#include <stdio.h>


void find_max(int n, double table[n]){
    double max = -9999;
    for (int i = 0; i < n; i++){
        if (table[i] > max){
            max = table[i];
        }
    }
    printf("\nMax value is %lf\n\n", max);
}


void find_min(int n, double table[n]){
    double min = 9999;
    for (int i = 0; i < n; i++){
        if (table[i] < min){
            min = table[i];
        }
    }
    printf("\nMin value is %lf\n\n", min);
}


void find_average(int n, double table[n]){
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + table[i];
        }
    printf("\nAverage value is %lf\n\n", sum/n);
    }


int main() {
    printf("This program allows to make three basics operation on a double list\n\n");
    int n;
    printf("Type length of the list:\n");
    scanf("%d", &n);
    double table[n];
    for (int i = 0; i < n; i++){
        double tmp;
        printf("\nType number for position %d:\n", i + 1);
        scanf("%lf", &tmp);
        table[i] = tmp;
    }
    int option = 1;
    while (option == 1 | option == 2 | option == 3) {
        printf("\nType number of option or any other number to exit:\n1 - find max value\n2 - find min value\n3 - find average value\n");
        scanf("%d", &option);
        switch (option){
            case 1:
                find_max(n, table);
                break;
            case 2:
                find_min(n, table);
                break;
            case 3:
                find_average(n, table);
                break;
        }
    }
    printf("\nGood bye!\n");
    return 0;
}
