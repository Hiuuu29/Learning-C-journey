#include<stdio.h>
#include<math.h>
// khoang cach 2 toa do 
// 
// lay 2 so sau dau phay)
int main()
{
	int x1, x2, y1, y2;
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	double khcach = sqrt(pow((x2-x1),2) + pow((y2-y1),2))  ; 
	printf ("%.2f", khcach);
	
	return 0;
}
