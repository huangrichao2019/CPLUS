#include <stdio.h>
const int maxn = 210;

int main()
{
	int a[maxn];
	int n, m;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		scanf("%d", &m);
		int j;
		for (j = 0; j < n; j++)
		{
			if (a[j] == m)
			{
				printf("%d\n", j);
				break;
			}
		}
		if (j == n)
			printf("-1\n");
	}
	return 0;
}