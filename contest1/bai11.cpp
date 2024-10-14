#include<stdio.h>
/*	cho 3 canh a b c
	tam gia c deu in ra 1: tam giac can 2 vuong 3 bth 4
	IVALID khi ko hop le
*/
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	if ( a>0 && b>0 && c>0 && a+b>c &&a+c>b && b+c>a)
	{
		if( a == b && a == c ) //deu
		{
			printf("1");
		}
		else if ( a==b || b==c || a==c)	// can
		{
			printf("2");
		}
		else if ( a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b ) // vuong
		{
			printf("3");
		}
		else printf("4");
	}
	else printf("INVALID");
	
	return 0;
}
