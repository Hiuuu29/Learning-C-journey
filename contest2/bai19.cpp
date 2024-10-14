#include<stdio.h>
/*cho n tien. mot chai bia la 28 xu
3 vo chai = 1 chai bia
tinh so bia cos the mua dc voi n tien
*/
int main()
{
	long long n;
	scanf("%lld",&n); 
	int bia = n/28; //so bia luc dau =  so vo chai luc dau
	int vo = bia;
	while(vo >= 3)
	{
		vo /= 3; // doi vo chai lan 1
		bia += vo;		
	}
	
	printf("%d",bia);
	
	return 0;
}
