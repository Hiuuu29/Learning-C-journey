#include<stdio.h>
/*dem chu so nguyen to cua n
1 3 5 7
*/
int main()
{
	long long n;
	scanf("%lld",&n);
	if(n==0) {
		printf("0");
		return 0; // ket thuc chuong trinh
	}
	int dem = 0;	
	while(n != 0)
	{
		if(n%10 == 3 || n%10 == 5 || n%10 == 7 || n%10 == 2)
		{
			dem ++;	
		}
		n /= 10;
	}
	printf("%d",dem);
	
	return 0;
}
