#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 2 * n; i += 2)
	{
		for (int j = 0; j < 2 * n - i; j += 2)
			printf("%c", i + j + 65);
		printf("\n");
	}
	return 0;
}
