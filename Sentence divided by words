#include <stdio.h>
#include <string.h>


int main() {
    char sentence[1000], words[100][100];
    int i, j, mark;
    printf("type your sentence\n");
    fgets(sentence, 1000, stdin);
    j = 0;
    mark = 0;
    for (i = 0; i <= strlen(sentence); i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            words[mark][j] = '\0';
            mark++;
            j = 0;
        } else {
            words[mark][j] = sentence[i];
            j++;
        }
    }
    return 0;
}
