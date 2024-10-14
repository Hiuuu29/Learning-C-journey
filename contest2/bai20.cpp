#include<stdio.h>
/*cho so nguyen duong n, bieu dien n duoi dang tong cac so nguyen to
sao cho so luong so hang trong tong la lon nhat co the
*/
int main()
{
	long long n;
	scanf("%lld",&n);
	if (n < 2)
	{
		printf("-1");
		return 0;
	}
	int dem = 0;
	if(n%2 == 0) // so chia het cho 2
	{
		printf("%lld\n",n/2);
		while(n != 0)
		{
			printf("2 ");
			n -= 2;
		}
	}
	else // ko chia het cho 2
	{
		printf("%lld\n",n/2);
		while(n != 0)
		{
			printf("2 ");
			n -= 2;
			if(n == 3)
			{
				printf("3");
				return 0;
			}
		}
	}
	
	
	return 0;
}
