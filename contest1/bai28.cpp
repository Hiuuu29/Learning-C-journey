#include<stdio.h>
/* cho cap so cong co n pt. ptu dau la u1 cong sai la d. tong cac phan tu cap so cong nay
*/
int main()
{
	long long n,u1,d;
	scanf("%lld%lld%lld",&n,&u1,&d);
	
	int s = n*u1 + (n*(n-1))/2*d;
	printf("%lld", s);
	
	return 0;
}
