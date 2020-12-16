#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (n % 2 == 1 && i == n / 2)
				printf("0");
			else if (m % 2 == 1 && j == m / 2)
				printf("0");
			else if (m % 2 == 0 && j == (m / 2) - 1)
				printf("0");
			else if (m % 2 == 0 && j == m / 2)
				printf("0");
			else if (n % 2 == 0 && i == (n / 2) - 1)
				printf("0");
			else if (n % 2 == 0 && i == n / 2)
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}
	return 0;
}
