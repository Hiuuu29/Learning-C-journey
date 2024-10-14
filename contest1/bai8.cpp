#include<stdio.h>
#include<math.h>
// nhap a,b tinh tong tich thuong (do chinh xác 4 so sau dau , )
// eu tinh thuong ko duoc in ra invalid
// lay 2 so sau dau phay)
int main()
{
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%d\n", a+b);
	printf("%d\n", a-b);
	
	long long tich = 1ll*a*b;
	printf("%lld\n", tich);
	
	double thuong = 1.0*a/b;
	if(b == 0)
	{
		printf("Invalid");	
	} 
	else printf("%.4lf", thuong);
	
	return 0;
}
