#include <stdio.h>
#include <string.h>


struct Sign{
    char name[12], start_day[3], start_month[3], end_day[3], end_month[3];
};


int str_to_int(char*(str)) { // name says it all, works via ascii method
    int  i, len;
    int result = 0;
    len = strlen(str);
    for(i = 0; i < len; i++){
        result = result * 10 + ( str[i] - '0' );
    }
    return result;
}


int main() {
    char date[6];
    struct Sign Signs[12] = {
            {"Aries", "21", "03", "19", "04"},
            {"Taurus", "20", "04", "20", "05"},
            {"Gemini", "21", "05", "20", "06"},
            {"Cancer", "21", "06", "22", "07"},
            {"Leo", "23", "07", "22", "08"},
            {"Virgo", "23", "08", "22", "09"},
            {"Libra", "23", "09", "22", "10"},
            {"Scorpio", "23", "10", "21", "11"},
            {"Sagittarius", "22", "11", "21", "12"},
            {"Capricorn", "22", "12", "19", "01"},
            {"Aquarius", "20", "01", "18", "02"},
            {"Pisces", "19", "02", "20", "03"}, };
    printf("Type number of day and number of month of your birth:\n");
    fgets(date, 6, stdin);
    char day[3], month[3];
    int i;
    for (i = 0; i < 3; i++){
        day[i] = date[i];
    }
    for (i = 3; i < 6; i++){
        month[i - 3] = date[i];
    }
    int tmp2 = (day[0] - '0') * 10 + day[1] - '0';
    for (i = 0; i < 12; i++) {
        if (strcmp(Signs[i].start_month, month) == 0) {
            int tmp1 = str_to_int(Signs[i].start_day);
            if (tmp1 <= tmp2) {
                printf("%s", Signs[i].name);
                break;
            }
        } else if (strcmp(Signs[i].end_month, month) == 0) {
            int tmp1 = str_to_int(Signs[i].end_day);
            if (tmp1 >= tmp2) {
                printf("%s", Signs[i].name);
                break;
            }
        }
    }
    return 0;
}
