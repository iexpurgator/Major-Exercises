#include <cstdio>
#define MAX 1e5
#define MIN -1e5

int main()
{
    int n, a[100];
    int maxx = MIN, minn = MAX, x1 = -1, x2 = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        if (a[i] >= maxx)
        {
            maxx = a[i];
            x1 = i;
        }
        if (a[i] <= minn)
        {
            minn = a[i];
            x2 = i;
        }
    }
    printf("%d %d\n", maxx, x1 + 1);
    printf("%d %d\n", minn, x2 + 1);
    return 0;
}
