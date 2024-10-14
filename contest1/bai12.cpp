#include<stdio.h>
/*	cho thang va nam , in ra so ngay tuong ung trong thang do

*/
int main()
{
	int t,n;
	scanf("%d%d",&t,&n);
	
	if(t > 0 && n>0 && t < 13)
	{
		if (n%400==0 || ( n%4==0 && n%100 !=0 ) )
		{
			if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 ||t == 12) printf("31");
			else if (t == 2) printf("29");
			else printf("30");
		}
		else
		{
			if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 ||t == 12) printf("31");
			else if (t == 2) printf("28");
			else printf("30");
		}
	}
	else printf("INVALID");
	
	
	
	return 0;
}
