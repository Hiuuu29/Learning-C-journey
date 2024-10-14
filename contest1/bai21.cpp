#include<stdio.h>
/* mot con frog dang o 0,0 tren Ox,
frog nhay theo quy luat le(1,3,5) : a ve ben phai   chan(2,4,6) : b ve ben trai
tinh toan vi tri sau k buoc
*/

int main()
{
	int a,b;
	int k, x=0;
	scanf("%d%d%d", &a,&b,&k);
	if(k%2 == 0 ) // nhay k chan
	{
		printf("%lld", 1ll * k/2*(a-b));  
	}
	else // k le
	{
		printf("%lld", 1ll * k/2*(a-b) + a);
	}
	
	return 0;
}
