#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct series{
    int number; int code; double measurements[];
};


int str_to_int(char*(str)) {
    int  i, len;
    int result = 0;
    len = strlen(str) - 2;
    for(i = 0; i < len; i++){
        result = result * 10 + ( str[i] - '0' );
    }
    return result;
}


void find_max(int n, double table[n], FILE *file, int number){
    double max = -9999;
    for (int i = 0; i < n; i++){
        if (table[i] > max){
            max = table[i];
        }
    }
    fprintf(file, "\nMax value in measurement number %d is %lf\n\n", number, max);
}


void find_min(int n, double table[n], FILE *file, int number){
    double min = 9999;
    for (int i = 0; i < n; i++){
        if (table[i] < min){
            min = table[i];
        }
    }
    fprintf(file, "\nMin value in measurement number %d is %lf\n\n", number, min);
}


void find_average(int n, double table[n], FILE *file, int number){
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + table[i];
    }
    fprintf(file, "\nAverage value in measurement number %d is %lf\n\n", number, sum/n);
}


int main() {
    printf("This program processes measurements form Pomiary.txt file and write results to Wyniki.txt file.\n\n");
    FILE *file;
    FILE *write;
    file = fopen("Pomiary.txt", "r");
    write = fopen("Wyniki.txt", "w");
    char cases_str[128];
    fgets(cases_str, sizeof(cases_str), file); //nie dziala cos
    int cases = str_to_int(cases_str);
    char line[128];
    for (int i = 0; i < cases; i++){
        char number_str[128];
        fgets(number_str, sizeof(number_str), file);
        int number = str_to_int(number_str);
        double measurements[100]; int j = 0;
        while (fgets(line, sizeof(line), file) != NULL){
            if (line[1] == '\n'){
                break;
            }
            char *tmp = NULL;
            double measurement = strtod(line, &tmp);
            measurements[j] = measurement; j++;
        }
        int code = measurements[j - 1];
        switch (code){
            case 0:
                find_average(j - 1, measurements, write, number);
                break;
            case 1:
                find_max(j - 1, measurements, write, number);
                break;
            case 2:
                find_min(j - 1, measurements, write, number);
                break;
        }
    }
    printf("Done, good bye!\n");
    return 0;
}
