#include<stdio.h>
#include<math.h>
// tim nam nhuan
// nam nhuan la nam chia het cho 400 hoac chia het cho 4 va khong chia het cho 100
// lay 2 so sau dau phay)
int main()
{
	int nam;
	scanf("%d", &nam);
	if ( nam%400 == 0 || ( (nam%4==0) && (nam%100!=0) ))	printf("Nam nhuan");
	else printf("nam ko nhuan");
	return 0;
}
