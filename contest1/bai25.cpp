#include<stdio.h>
#include<math.h>
/*menh gia tien la 1 5 10 20 100
so to tien toi thieu rut ra tu so du ngan hang
*/
int main()
{
	int n;
	scanf("%d",&n);
	int tien=0;
	tien = n/100;
	n %= 100;
	tien = tien + n/20;
	n %= 20;
	tien = tien + n/10;
	n %= 10;
	tien = tien + n/5;
	n %= 5;
	tien = tien + n/1; 
	
	printf("%d", tien);
	return 0;
}
