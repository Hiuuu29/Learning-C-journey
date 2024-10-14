#include<stdio.h>
/*tinh tong cac chu so cua n
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
		dem  += n % 10;
		n /= 10;
	}
	printf("%d",dem);
	
	return 0;
}
