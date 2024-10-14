#include<stdio.h>
// pi = 3.14
// tinh chu vi va dien tich hinh tron
// 1<R<1000
// 4 so sau dau ,
int main()
{
	unsigned int R;
	scanf("%d",&R);
	double chuvi = 2.0 * 3.14 * R;
	double S = 3.14 * R*R;
	printf ("%.4lf %.4lf", chuvi, S);
	
	
	return 0;
}
