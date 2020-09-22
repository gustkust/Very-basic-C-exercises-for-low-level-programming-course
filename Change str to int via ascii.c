int str_to_int(char* (str)) {
    int  i = 0;
    int result = 0;
    while (str[i] > 37 && str[i] < 58) {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result;
}
