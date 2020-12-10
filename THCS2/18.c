#include <stdio.h>
#include <math.h>
#include <stdbool.h>

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
    for(int i = a; i <= b; i++){
        if(NT(i)) printf("%d ", i);
    }
    return 0;
}
