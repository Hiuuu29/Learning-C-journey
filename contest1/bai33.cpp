#include<stdio.h>
/* co 3 chi em da co tiena b c. 1 nguoi chia tien cho 3 chi em luong tien la A B C
chia sao cho A+a = B+b = C+c
*/
int main()
{
	int a,b,c,n;
	scanf("%d%d%d%d",&a,&b,&c,&n);
	
	int tong = a+b+c+n; // tong so tien
	if(tong%3==0)
	{
		tong = tong/3;
		if(tong -a >=0 && tong -b>=0 && tong -c>=0)
			printf("YES");
		else
			printf("NO");
	}
	else
	{
		printf("NO");
	}
	
	
	return 0;
}
