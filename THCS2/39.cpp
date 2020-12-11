#include <stdio.h>

int n;
int main() {
    scanf("%d", & n);
    int a[n][n], x = n * n, T = 0, B = n - 1, L = 0, R = n - 1;
    while (x > 0) {
        for (int i = L; i <= R; x--)
            a[T][i++] = x;
        T++;
        for (int i = T; i <= B; x--)
            a[i++][R] = x;
        R--;
        for (int i = R; i >= L; x--)
            a[B][i--] = x;
        B--;
        for (int i = B; i >= T; x--)
            a[i--][L] = x;
        L++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
