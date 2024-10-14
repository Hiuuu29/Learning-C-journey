#include<stdio.h>
// nhap a b c xem a b c gop lai thanh tam gia cduoc ko
int main() 
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if  ((a+b > c && a+c > b && c+b >a )&& (a > 0 && b > 0 && c > 0)) printf("Yes");
	else printf("No");
}
