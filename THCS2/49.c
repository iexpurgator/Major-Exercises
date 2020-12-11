#include <stdio.h>
#include <string.h>
#include <ctype.h>

void delSpace(char str[]) {
    int n = (int) strlen(str);
    while(str[0] == ' ')
        strcpy(&str[0], &str[1]);
    
    for(int i = 0; i < n; ++i){
        if(str[i] == ' ' && str[i+1] == ' '){
            strcpy(&str[i], &str[i+1]);
            i--;
        }
        n = (int) strlen(str);
    }
    
    while(str[n - 1] == ' '){
        strcpy(&str[n-1], &str[n]);
        n = (int) strlen(str);
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
    gets(s);
    delSpace(s);
    mark = Mrk(s);
    for(int i = mark + 1; i < strlen(s); ++i){
        printf("%c", s[i]);
        if(i == strlen(s) - 1) printf(", ");
    }
    
    for(int i = 0; i < mark; ++i){
        if(i > 0 && s[i-1] != ' ') s[i] = tolower(s[i]);
        printf("%c", s[i]);
    }
    return 0;
}
//   ngUYEN     van    nam