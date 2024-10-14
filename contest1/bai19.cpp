#include<stdio.h>
/* hcn MxN, domino 2x1, 
*/

int main()
{
	int m,n;
	scanf("%d%d", &m,&n);
	if(n%2 ==0) // hang chan 
	{
		printf("%lld",1ll * n/2*m);
	}
	else // hang le
	{
		printf("%lld",1ll * n/2*m + m/2);
	}
	
	return 0;
}
