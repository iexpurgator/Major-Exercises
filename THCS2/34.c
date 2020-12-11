#include <stdio.h>

void nhap(int *a, int sz){
    for(int i = 0; i < sz; ++i){
        scanf("%d", a + i);
    }
}

void xuat(int *a, int sz){
    for(int i = 0; i < sz; ++i){
        printf("%d ", *(a + i));
    }
}

int main(){
    int n, m, x;
    int a[100], b[100], tmp[100];
    scanf("%d%d%d", &n,&m,&x);
    nhap(a, x);
    nhap(tmp, n - x);
    nhap(b, m);
    xuat(a, x);
    xuat(b, m);
    xuat(tmp, n - x);
    return 0;
}