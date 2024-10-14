#include<stdio.h>
/* co dong xu voi gtri dong xu ko gioi han 1...n
Tong so tien la S, so luong dong xu toi thieu de co dc S
*/
int main()
{
	int m;
	long long S;
	scanf("%d%lld", &m,&S);
	
	if(S%m == 0) printf("%lld", 1ll * S/m);
	else printf("%lld", 1ll * S/m + 1);
	
	return 0;
}
