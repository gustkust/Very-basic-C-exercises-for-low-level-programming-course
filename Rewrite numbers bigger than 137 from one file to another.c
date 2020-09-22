#include <stdio.h>


int main() {
    printf("This program rewrites numbers bigger than 137 from one file to another.\n\n");
    FILE *file_to_read;
    FILE *file_to_write;
    char given_file[25], given_to_write[25];
    printf("Enter a valid name of a file to scan from:\n\n");
    gets(given_file);
    printf("Enter a valid name of a file to write to:\n\n");
    gets(given_to_write);
    int current_digit;
    int number[10];
    int i = 0;
    file_to_read = fopen(given_file, "r");
    file_to_write = fopen(given_to_write, "w");
    while ((current_digit=fgetc(file_to_read)) != EOF){
        if (current_digit == ' ') {
            i--;
            int num_to_com = 0;
            int j = 0, x;
            while (i >= 0) {
                int pow = 1;
                for (x = 0; x < i; x++){
                    pow = pow * 10;
                }
                num_to_com = num_to_com + pow * number[j];
                i--;
                j++;
            }
            if (num_to_com > 137) {
                fprintf(file_to_write, "%d ", num_to_com);
            }
        }
        current_digit = current_digit - '0';
        number[i] = current_digit;
        i++;
        }
    i--;
    int num_to_com = 0;
    int j = 0, x;
    while (i >= 0) {
        int pow = 1;
        for (x = 0; x < i; x++){
            pow = pow * 10;
        }
        num_to_com = num_to_com + pow * number[j];
        i--;
        j++;
    }
    if (num_to_com > 137) {
        fprintf(file_to_write, "%d ", num_to_com);
    }
    return 0;
}
