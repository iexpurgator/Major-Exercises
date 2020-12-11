#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

int main(){
    int a, r[100][100], s[100] = {}, min = 10000, loc = -1;
    scanf("%d", &a);
    for(int i = 0; i < a; ++i){
        for(int j = 0; j < a; ++j){
            scanf("%d", &r[i][j]);
            s[j] += r[i][j];
        }
    }
    for(int i = 0; i < a; ++i){
        if(s[i] < min){
            min = s[i];
            loc = i;
        }
    }
    printf("%d\n", loc + 1);
    for(int j = 0; j < a; ++j){
        printf("%d ", r[j][loc]);
    }
    printf("\n");
    return 0;
}
/*
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/
