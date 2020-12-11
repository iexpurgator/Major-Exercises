#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

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

bool NT(int x){
    if(x == 2) return true;
    if(x < 2 || x % 2 == 0) return false;
    for(int i = 2; i <= sqrt(x); ++i){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = a; i <= b; ++i){
        if(split(i)){
            int j = 2, dem = 0;
            while(j < i/2){
                if(NT(j) && i % j == 0) dem++;
                if(dem == 3){
                    printf("%d ", i);
                    break;
                }
                j++;
            }
        }
    }
    printf("\n");
    return 0;
}