#include<stdio.h>
// nhiet do F = (C*9/5) +32
// nhap do C la nguyen duong lon hon 0 be hon 10^6
// in do F ra (lay 2 so sau dau phay)
int main()
{
	unsigned int C;
	scanf("%d",&C);
	double F = ((double)C*9)/5 + 32;
	printf ("%.2lf", F);
	
	return 0;
}
