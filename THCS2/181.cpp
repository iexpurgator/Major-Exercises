#include <cstdio>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        int tmp = i + 1;
        for (int j = 0; j < m; j++)
        {
            if (tmp < m)
                printf("%d", tmp++);
            else
                printf("%d", m);
        }
        printf("\n");
    }
    return 0;
}
