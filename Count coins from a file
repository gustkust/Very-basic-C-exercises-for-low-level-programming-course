#include <stdio.h>


int main() {
    printf("This program counts polish coins from a file.\n\n");
    FILE *file_to_read;
    char given_file[25], given_to_write[25];
    printf("Enter a valid name of a file to scan from:\n\n");
    gets(given_file);
    int current_symbol;
    double money = 0;
    int c_num = 0, t_num = 0, f_num = 0, d_num = 0, q_num = 0, h_num = 0, K_num = 0, D_num = 0, F_num = 0;
    file_to_read = fopen(given_file, "r");
    while ((current_symbol=fgetc(file_to_read)) != EOF){
        switch (current_symbol){
            case 'c':
                money = money + 0.01;
                c_num = c_num + 1;
                break;
            case 't':
                money = money + 0.02;
                t_num = t_num + 1;
                break;
            case 'f':
                money = money + 0.05;
                f_num = f_num + 1;
                break;
            case 'd':
                money = money + 0.1;
                d_num = d_num + 1;
                break;
            case 'q':
                money = money + 0.2;
                q_num = q_num + 1;
                break;
            case 'h':
                money = money + 0.5;
                h_num = h_num + 1;
                break;
            case 'K':
                money = money + 1;
                K_num = K_num + 1;
                break;
            case 'D':
                money = money + 2;
                D_num = D_num + 1;
                break;
            case 'F':
                money = money + 2;
                F_num = F_num + 1;
                break;
        }
    }
    printf("\nSum of money is %.2f\n\n", money);

    if (c_num != 0){
        printf("Number of 1gr coins:  %d\n", c_num);
    }
    if (c_num != 0){
        printf("Number of 2gr coins:  %d\n", t_num);
    }
    if (c_num != 0){
        printf("Number of 5gr coins:  %d\n", f_num);
    }
    if (c_num != 0){
        printf("Number of 10gr coins: %d\n", d_num);
    }
    if (c_num != 0){
        printf("Number of 20gr coins: %d\n", q_num);
    }
    if (c_num != 0){
        printf("Number of 50gr coins: %d\n", h_num);
    }
    if (c_num != 0){
        printf("Number of 1zl coins:  %d\n", K_num);
    }
    if (c_num != 0){
        printf("Number of 2zl coins:  %d\n", D_num);
    }
    if (c_num != 0){
        printf("Number of 5zl coins:  %d\n", F_num);
    }
    return 0;
}
