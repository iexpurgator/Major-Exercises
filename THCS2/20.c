#include <stdio.h>
#include <stdbool.h>

int power(int b, int n){
    int powed = 1;
    for(int i = 0; i < n; ++i){
        powed *= b;
    }
    return powed;
}

bool amstrong(int x){
    int tmp = x, sum = 0, a[5] = {}, i = 0;
    while(tmp > 0){
        a[i] = tmp % 10;
        tmp /= 10;
        i++;
    }
    for(int j = 0; j < i; ++j){
        sum += power(a[j], i);
    }
    if(sum == x) return true;
    return false;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = a; i <= b; ++i){
        if(amstrong(i))printf("%d ", i);
    }
    return 0;
}
