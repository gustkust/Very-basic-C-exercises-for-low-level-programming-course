#include <stdio.h>
#include <string.h>


int str_to_int(char*(str)) { // name says it all, works via ascii method
    int  i, len;
    int result=0;
    len = strlen(str);
    for(i=0; i<len; i++){
        result = result * 10 + ( str[i] - '0' );
    }
    return result;
}


void decimal_to_binary(unsigned int(x)) {
    int i, a[99];
    for (i = 0; x > 0; i++){
        a[i] = x & 1;
        x = x >> 1;
    }
    printf("number in binary:\n");
    for (i = i - 1; i > -1; i--){ // still dont know how to transfer this a to int so I just print it
        printf("%d", a[i]);
    }
}


void binary_to_decimal(unsigned int(x)) { // ngl pretty proud bout this one
    int result = 0;
    int a = 1;
    while (x > 0){
        if (x % 10 == 1){
            result = result + a;
        }
        a = a << 1;
        x = x / 10;
    }
    printf("number in decimal:");
    printf("%d", result);
}


int main() {
    printf("type number with its type at the start (D or B):\n");
    char z[9999];
    scanf("%s", z);
    char n = '0';
    n = z[0]; // n is D or B
    char x[9999];
    for (int i = 0; i < strlen(z) - 1; i++ ){
        x[i] = z[i + 1];
    }
    int y = str_to_int(x); // y is int to transform at this point on
    if (n == 'D'){
        decimal_to_binary(y);
    }
    if (n == 'B'){
        binary_to_decimal(y);
    }
    return 0;
}
