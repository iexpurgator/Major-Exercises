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
        for (int j = J; j <= E; ++j)
        {
            if (i > j)
                printf("%d", i);
            else
                printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}