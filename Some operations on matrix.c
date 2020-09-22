#include <stdio.h>
#include <string.h>

#define k 5
int w;
double matrix[10][k];


int get_int(char* massage) {
    char input[1024];
    int i;
    int number = 0;
    printf("%s", massage);
    fgets(input, 1024, stdin);
    for (i = 0; i < strlen(input) - 1; i++) {
        number = number * 10 + input[i] - 48;
    }
    return number;
}


double get_double(char* massage) {
    char input[1024];
    int i, dot = 1024;
    double number = 0, number_tail = 0;
    printf("%s", massage);
    fgets(input, 1024, stdin);
    for (i = 0; i < strlen(input) - 1; i++) {
        if (input[i] == '.') {
            dot = i;
        }
        else if (i > dot) {
            number_tail = number_tail * 10 + input[i] - 48;
        }
        else {
            number = number * 10 + input[i] - 48;
        }
    }
    while (number_tail >= 1) {
        number_tail = number_tail * 0.1;
    }
    number = number + number_tail;
    return number;
}


// creates matrix
void option_1() {
    int x, y;
    w = get_int("Type number of rows:\n");
    for (x = 0; x < w; x++) {
        for (y = 0; y < k; y++) {
            printf("Type value for position %d, %d:\n", x + 1, y + 1);
            matrix[x][y] = get_double("");
        }
    }
}


// count sum of values bigger than given number in every row
void option_2() {
    double x, result;
    int i, j;
    x = get_double("Type value:\n");
    for (i = 0; i < w; i++) {
        result = 0;
        for (j = 0; j < k; j++) {
            if (matrix[i][j] > x) {
                result += matrix[i][j];
            }
        }
        printf("Sum in row number %d is %lf\n", i + 1, result);
    }
}


// multiplies given number of first values in each collumn
void option_3() {
    double x, result;
    int i, j;
    x = get_double("Type value\n");
    for (j = 0; j < k; j++) {
        result = 1;
        for (i = 0; i < x; i++) {
            result *= matrix[i][j];
        }
        printf("Result in collumn number %d is %lf\n", j + 1, result);
    }
}


// counts rows in which first position is bigger than last
void option_4() {
    int i, result = 0;
    for (i = 0; i < w; i++) {
        if (matrix[i][0] > matrix[i][w]) result++;
    }
    printf("Result is %d\n", result);
}


// counts rows which have at least one zero
void option_5() {
    int i, j, result = 0;
    for (i = 0; i < w; i++) {
        for (j = 0; j < k; j++) {
            if (matrix[i][j] == 0) {
                result++;
                break;
            }
        }
    }
    printf("Result is %d\n", result);
}


void (*option_table[5])() = {option_1, option_2, option_3, option_4, option_5};


int main() {
    int option_num;
    option_num = get_int("Type option number:\n");
    while (option_num != 0){
        if (option_num > 0 && option_num <= 5) {
            (*option_table[option_num - 1])();
        }
        option_num = get_int("\nType option number:\n");
    }
    return 0;
}
