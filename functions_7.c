#include <stdio.h>

int pattern1();
int pattern2();

int main()
{
	int n = 15;
	pattern1(n);
	pattern1(n);
	pattern2(n);
	pattern1(n);
	pattern1(n);
}

int pattern1(n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		printf("_");
	}
	printf("\n");
}
int pattern2()
{
	printf("samyak classes\n");
}
