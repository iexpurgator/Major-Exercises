#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool split(int x){
    int tmp = x, s = 0;
    if(x < 10) return false;
    while(tmp > 0){
        s *= 10;
        s += tmp % 10;
        tmp /= 10;
    }
    if(s == x) return true;
    return false;
}

int main(){
    int n, a[50] = {}, dem = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
        if(split(a[i])) dem++;
        else a[i] = -1;
    }
    printf("%d", dem);
    for(int i = 0; i < n; ++i){
        if(a[i] > 0) printf(" %d", a[i]);
    }
}