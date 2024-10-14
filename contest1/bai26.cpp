#include<stdio.h>
#include<math.h>
/*nhap a b c d tim min va max*/
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	int max = fmax(fmax(a,b),fmax(c,d));
	int min = fmin(fmin(a,b),fmin(c,d));
	
	printf("%d %d", max, min);
	
//	int max =a;
//	int min =a;
//	if(b>a) b = max;
//	if(c>a) c = max;
//	if(d>a) d = max;
//	
//	if(b<a) b = min;
//	if(c<a) c = min;
//	if(d<a) d = min;
//	
//	printf("%d %d", max, min);
	
	return 0;
}
