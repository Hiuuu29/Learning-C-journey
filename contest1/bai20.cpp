#include<stdio.h>
/* fill hcn mxn, bang hinh vuong axa
cho phep fill tran 
*/

int main()
{
	int m,n;
	int a;
	scanf("%d%d%d", &m,&n,&a);
	if(n%a == 0 && m%a == 0) // chia het cho 2 canh
	{
		printf("%lld", 1ll * n/a * m/a );  
	}
	else if (n%a == 0) // chia het cho 1 canh
	{
		printf("%lld", 1ll * n/a * m/a + n ); 
	}
	else // ko chia het cho canh nao
	{
		printf("%lld", 1ll * (n/a + 1) * ( m/a + 1 )); 
	}
	
	return 0;
}
