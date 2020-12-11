#include <stdio.h>
#include <string.h>
#include <ctype.h>

void delSpace(char str[]) {
    int n = (int) strlen(str);
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            while (str[i + 1] == ' ') {
                for (int j = i; j < n; j++) {
                    str[j] = str[j + 1];
                }
            }
            if (i == 0)
                for (int j = 0; j < n; j++)
                    str[j] = str[j + 1];
        }
    }
}

int Mrk(char str[]){
    int n = (int) strlen(str), mark = 0;
    for(int i = 0; i < n; ++i){
        str[i] = toupper(str[i]);
        if(str[i] == ' ') mark = i;
    }
    return mark;
}

int main() {
    char s[50], mark;
    fgets(s, sizeof(s), stdin);
    delSpace(s);
    mark = Mrk(s);
    
    for(int i = 0; i < mark; ++i){
            if(i > 0 && s[i-1] != ' ') s[i] = tolower(s[i]);
        printf("%c", s[i]);
    }
    
    char *token = strtok(s, " ");
    char *name;
    while (token != NULL) {
        name = token;
        token = strtok(NULL, " ");
    }

    printf(", %s", name);
    return 0;
}