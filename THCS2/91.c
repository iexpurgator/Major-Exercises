#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

int fbarr[11] = {1, 1};
int fibo(int x, int a, int b, int i){
    if(x == 0) return 0;
    fbarr[i] = a + b;
    a = b;
    b = fbarr[i];
    return fibo(x - 1, a, b, i + 1);
}

int sum(int x){
    int s = 0;
    while(x > 0){
        s += x % 10;
        x /= 10;
    }
    return s;
}

bool NT(int x){
    if(x == 2) return true;
    if(x < 2 || x % 2 == 0) return false;
    for(int i = 2; i <= sqrt(x); ++i)
        if(x % i == 0) return false;
    return true;
}

int main(){
    int a, b;
    fibo(9, fbarr[0], fbarr[1], 2);
    scanf("%d%d", &a, &b);
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = a; i <= b; ++i) {
        if(NT(i)){
            for(int j = 1; j < 11; j++){
                if(sum(i) == fbarr[j])
                    printf("%d ", i);
            }
        }
    }
    return 0;
}