#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool NT(int x){
    if(x == 2) return true;
    if(x % 2 == 0 || x < 2) return false;
    for(int i = 2; i <=sqrt(x); ++i){
        if(x % i == 0) return false;
    }
    return true;
}

bool down(int x){
    int before = 0;
    do {
        before = x % 10;
        x /= 10;
        if(x != 0 && (x % 10) <= before) return false;
    } while (x != 0);
    return true;
}

bool up (int x){
    int before = 0;
    do {
        before = x % 10;
        x /= 10;
        if(x != 0 && (x % 10) >= before) return false;
    } while (x != 0);
    return true;
}

int main(){
    int n, sta = 1, end = 9, dem = 0;
    scanf("%d", &n);
    for(int i = 1; i < n; ++i){
        sta *= 10;
        end *= 10;
        end += 9;
    }
    for(int i = sta; i <= end; ++i){
        if(NT(i))
            if(up(i) || down(i)) dem++;
    }
    printf("%d", dem);
    return 0;
}