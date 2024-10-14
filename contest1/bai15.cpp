#include<stdio.h>
/* H dang cook, can chinh xac n lit nuoc. Cua hang co 2 loai 1L va 2L (cua hang co vo so) 
Gia chai 1L:a 2L:b 
Mua sao re nhat khi H can n Lit nuoc, mua chinh xac ko thua va thieu
1<n<10^12
*/
int main()
{
	long long a,b,n;
	scanf("%lld %lld %lld",&n,&a,&b);
	int tien;
	if(2*a <= b)
	{
		printf("%lld", n*a);
	}
	else
	{
		if(n%2==0) printf("%lld", b*n/2);
		else printf("%lld", a + b*n/2);
	}
	
	
	return 0;
}
