#include <stdio.h>

int main()
{
    int size = 0;
    int n[100][100] = {0}, m[100][100] = {0};
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &n[i][j]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            m[i][size - j - 1] = n[j][i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}