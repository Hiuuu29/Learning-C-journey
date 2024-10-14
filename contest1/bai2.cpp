 #include<stdio.h>
 // nhap a b c tren 1 dong tinh s = a*(b+c) +b*(a+c)
 // -10^8  < a b c < 10^8
int main()
{
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	long long s = 1ll * a*(b+c) + 1ll * b*(a+c);
	printf ("%lld", s);
	
	return 0;
}
