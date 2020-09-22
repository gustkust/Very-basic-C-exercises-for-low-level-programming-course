#include <stdio.h>
#include <string.h>

int get_int(char *massage){
    char input[1024];
    int i;
    int number = 0;
    printf("%s", massage);
    fgets(input, 1024, stdin);
    for (i = 0; i < strlen(input); i++){
        number = number * 10 + (input[i] - '0');
    }
    return number;
}


double get_double(char *massage){
    char input[1024];
    int i, dot = 1024;
    double number = 0, number_tail = 0;
    printf("%s", massage);
    fgets(input, 1024, stdin);
    for (i = 0; i < strlen(input) - 1; i++){
        if (input[i] == '.') {
            dot = i;
        }
        else if (i > dot){
            number_tail = number_tail * 10 + (input[i] - '0');
        } else{
            number = number * 10 + (input[i] - '0');
        }
    }
    while (number_tail > 1){
        number_tail = number_tail * 0.1;
    }
    number = number + number_tail;
    return number;
}
