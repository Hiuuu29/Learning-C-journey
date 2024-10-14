#include<stdio.h>
#include<math.h>
/*cho 2 so a b tinh uoc chung lon nhat cua a giai thua va b giai thua
*/
int main()
{
	int a,b;
	scanf("%d%d",&a, &b);
	long long gt = 1;
	int min = fmin(a,b);
	for(int i =1 ; i<= min; i++)
	{
		gt *= i;
	}
	printf("%lld", gt);
	
	
	
	return 0;
}
