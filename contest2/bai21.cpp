#include<stdio.h>
/*ve hinh. nhap n ko qua 100. in hinh tuong ung
*/
int main()
{
	int n;
	scanf("%d",&n); 
	int hang = 0, cot = 0;
	for(int i = 1 ; i <= n; i++)
	{
		for(int j = 1; j <= n; j++) // in ra nam hang ngang
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 1 ; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i==1 || i ==n |j == 1 || j==n)
				printf("*");
			else 
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 1 ; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i==1 || i ==n |j == 1 || j==n)
				printf("*");
			else 
				printf("#");
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 1 ; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i==1 || i ==n |j == 1 || j==n)
				printf("%d ",i);
			else 
				printf("  ");
		}
		printf("\n");
	}
	
	
	
	return 0;
}
