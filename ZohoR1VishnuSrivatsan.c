#include <stdio.h>
int main()
{
	char letter[] = "0";
	printf("Enter the words");
	scanf("%c", &letter);
	int i,j;
	for (i = 1; i <= *letter; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("%c", letter[0]);
		}
		printf("\n");
	}
	return 0;
}
