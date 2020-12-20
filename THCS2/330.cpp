#include <cstdio>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int I = n >= m ? 1 : (m - n + 1);
    int J = n >= m ? (n - m + 1) : 1;
    int E = n >= m ? n : m;
    for (int i = E; i >= I; --i)
    {
        for (int j = E; j >= J; --j)
        {
            if (i > j)
                printf("%c", i + 96);
            else
                printf("%c", j + 96);
        }
        printf("\n");
    }
    return 0;
}