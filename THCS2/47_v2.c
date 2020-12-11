#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100], s1[100];
    int x = 0, y = 0, check[100] = {}, print[100] = {0};
    gets(s);
    gets(s1);

    
    char *token = strtok(s, " ");
    char *word[100];
    
    while (token != NULL) {
        int sz = (int)strlen(token);
        for(int i = 0; i < sz;++i){
            *(token +i) = tolower(*(token+i));
        }
        word[x++] = token;
        token = strtok(NULL, " ");
    }
    
    token = strtok(s1, " ");
    char *word2[100];
    while (token != NULL) {
        int sz = (int)strlen(token);
        for(int i = 0; i < sz;++i){
            *(token +i) = tolower(*(token+i));
        }
        word2[y++] = token;
        token = strtok(NULL, " ");
    }
    for(int i = 0, key = 1; i < y; ++i){
        int dem = 0, loc = -1;
        for(int j = 0; j < x; ++j){
            int tu = 0;
            if(check[j] == 0 && strlen(word2[i]) == strlen(word[j])){
                for(int k = 0; k < strlen(word2[i]); ++k){
                    if(*(word2[i]+k) == *(word[j]+k)) tu++;
                }
                if(tu == strlen(word2[i])){
                    dem++;
                    check[j] = key;
                    loc = j;
                }
            }
        }
        key++;
    }
    for(int i = 0; i < x; ++i){
        if(check[i] == 0){
            for(int j = i + 1; j < x; ++j){
                int tu = 0;
                if(check[j] == 0 && strlen(word[i]) == strlen(word[j])){
                    for(int k = 0; k < strlen(word[i]); ++k){
                        if(*(word[i]+k) == *(word[j]+k)) tu++;
                    }
                    if(tu == strlen(word[i])){
                        check[j] = 1;
                        print[j] = 1;
                    }
                }
            }
        }
    }
    for(char c = 'a'; c <= 'z'; ++c){
        for(int k = 0; k < x; ++k){
            if(check[k] == 0 && print[k] == 0 && *word[k] == c) printf("%s\n", word[k]);
        }
    }
    return 0;
}
/*
bc abc ab abcd ab ab abcd
ab abc
*/
