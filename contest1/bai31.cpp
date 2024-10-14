#include<stdio.h>
/* tu kinh voi n ke
co a1 a2 a3 cup giai nhat nhi ba
b1 b2 b3 huy chuong giai nhat nhi ba
KO THE CHUA CUP VA HUY CHUONG TRONG CUNG 1 KE
KE <=5 CUP VA <= 10 HUY CHUONG
CO THE DAT THEO DIEU KIEN TREN KO "YES" "NO"
*/
int main()
{
	int a1,a2,a3;
	int b1,b2,b3,n;
	scanf("%d%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3,&n);
	
	if((a1+a2+a3)%5 == 0)
		n =n - (a1+a2+a3)/5; //so ke con lai = so ke luc dau - so ke dung cup(cup chia het cho 5)
	else
		n = n - ((a1+a2+a3)/5 + 1); //so ke con lai = so ke luc dau - so ke dung cup(cup ko chia het cho 5)

	if((b1+b2+b3)%10 == 0)
		n =n - (b1+b2+b3)/10; //so ke con lai = so ke luc dau - so ke dung cup(cup chia het cho 5)
	else
		n = n - ((b1+b2+b3)/10 + 1); //so ke con lai = so ke luc dau - so ke dung cup(cup ko chia het cho 5)
	
	if (n>=0) printf("YES");
	else printf("NO");
	
	
	
	return 0;
}
