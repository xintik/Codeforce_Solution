#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n;
		scanf("%d",&n);

		for(int i = 1; i <=n; i++)
		{
			printf("%d " , i);
		}
		printf("\n");
	}

}