#include<stdio.h>
/*ve hinh 3. nhap n ko qua 100. in hinh tuong ung
*/
int main()
{
	int n;
	scanf("%d",&n); 
	int hang = 0, cot = 0;
	int so = 1;
	for(int i = 1 ; i <= n; i++)
	{
		for(int j = 1; j <= n; j++) 
		{
			printf("%d ",so);
			so++;
		}
		printf("\n");
	}
	printf("\n");
	/////////
	for(int i = 1 ; i <= n; i++)
	{
		int so2 = i;
		for(int j = 1; j <= n; j++)
		{
			printf("%d ",so2);
			so2++;
		}
		printf("\n");
	}
	printf("\n");
	//////
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 5; j > 0; j--) 
		{
			if(j <= i)
				printf("%d",i);
			else 
				printf("~");
		}
		printf("\n"); //xuong hang
	}
	printf("\n");
	/////////
	for(int i = 1 ; i <= n; i++)
	{
		int so3 = i;
		int kc = n - 1;
		for(int j = 1; j <= i; j++) // in ra nam hang ngang-> in ra j lan *
		{
			printf("%d ",so3);
			so3 += kc;
			kc--;
		}
		printf("\n"); //xuong hang
	}
	printf("\n");
	
	
	
	return 0;
}
