#include<stdio.h>
/*ve hinh 2 . nhap n ko qua 100. in hinh tuong ung
*/
int main()
{
	int n;
	scanf("%d",&n); 
	int hang = 0, cot = 0;
	for(int i = 1 ; i <= n; i++)
	{
		for(int j = 1; j <= i; j++) // in ra nam hang ngang-> in ra j lan *
		{
			printf("*");
		}
		printf("\n"); //xuong hang
	}
	printf("\n");
	/////
	for(int i = n ; i > 0; i--)
	{
		for(int j = i; j > 0; j--) 
		{
			printf("*");
		}
		printf("\n"); //xuong hang
	}
	printf("\n");
	//////
	for(int i = n ; i > 0 ; i--)
	{
		for(int j = 1; j <= n; j++) // in ra nam hang ngang-> in ra j lan *
		{
			if(j >= i)
				printf("*");
			else 
				printf(" ");
		}
		printf("\n"); //xuong hang
	}
	printf("\n");
	//////
	for(int i = 1 ; i <= n; i++)
	{
		for(int j = 1; j <= i; j++) // in ra nam hang ngang-> in ra j lan *
		{
			if(i==1 || i==2 || i==n || j==1 || j == i )
			printf("*");
			else printf(" ");
		}
		printf("\n"); //xuong hang
	}
	printf("\n");
	
	
	
	return 0;
}
