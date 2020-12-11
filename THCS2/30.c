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

bool check(int x){
    int sum = 0;
    if(!NT(x)) return false;
    while(x != 0){
        int jj = x % 10;
            if(NT(jj)){
                sum += jj;
                x /= 10;
            }
        else return false;
    }
    if(NT(sum)) return true;
    return false;
}

int main(){
    int a, b, dem = 0;
    scanf("%d%d", &a, &b);
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = a; i <= b; ++i){
        if(check(i)) dem++;
    }
    printf("%d ", dem);
    return 0;
}