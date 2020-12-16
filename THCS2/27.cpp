#include <stdio.h>

int main()
{
    long long n;
    int le = 0, chan = 0;
    scanf("%lli", &n);
    while (n > 0)
    {
        if (n % 2 == 0)
            chan++;
        else
            le++;
        n /= 10;
    }
    printf("%d %d", le, chan);

    return 0;
}
