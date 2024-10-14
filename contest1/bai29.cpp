#include<stdio.h>
/* cho 4 so a b c d. Ktra 4 so co the theo thu tu tao thanh 1 cap so nhan
voi cong boi nguyen theo dung thu tu a b c d
*/
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d", &a,&b,&c,&d);
	
	int res = b/a;
	if (b%a == 0)
	{
		if (b*res == c && c*res == d) printf("YES");
		else printf("NO");
	}
	else printf("NO");
	
	
	
	return 0;
}
