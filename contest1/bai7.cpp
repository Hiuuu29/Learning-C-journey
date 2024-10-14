#include<stdio.h>
#include<math.h>
// cho 2 so a b tim 2 so
// so thu 1 : so lon nhat <=a ma chia het cho b
// so thu 2 : so nho nhat >=a chia het cho b
// lay 2 so sau dau phay)
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int pow = a/b;
	int n1,n2;
	
	if (a%b == 0) n1 = n2 =pow;
	else{
	n1 = pow*b;
	n2 = (pow+1)*b;	
	}
	
	printf("%d %d",n1,n2);
	return 0;
}
