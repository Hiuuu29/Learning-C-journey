#include<stdio.h>
/*dem xem co ban nhieu chu so
*/
int main()
{
	long long n;
	scanf("%lld",&n);
	if(n==0) {
		printf("1");
		return 0; // ket thuc chuong trinh
	}
	int dem = 0;	
	while(n != 0)
	{
		dem++;
		n /= 10;
	}
	printf("%d",dem);
	
	return 0;
}
