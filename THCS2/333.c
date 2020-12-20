#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0, k; i < n; ++i)
  {
    k = i + 65;
    for (int j = 0; j <= i; ++j)
    {
      if (j == 0)
        printf("%c ", k);
      else
        printf("%c ", k += n - j);
    }
    printf("\n");
  }
  return 0;
}
