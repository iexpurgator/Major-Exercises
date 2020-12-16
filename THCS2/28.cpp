#include <stdio.h>

int main()
{
    long long n;
    int check = 0;
    scanf("%lli", &n);
    while (n > 0)
    {
        if (n % 10 == 0 || n % 10 == 8 || n % 10 == 6)
            check = 1;
        else
            check = 0;
        n /= 10;
        if (check == 0)
            break;
    }
    printf("%d", check);
    return 0;
}
