#include<stdio.h>
/* diem 2 con hs 1 : 1 con hs 2 : 1 con hs 3
>=8 gioi
>= 6.5 kha
>5 tb
<5 yeu
*/
int main()
{
	float d1,dd1,d2,d3;
	scanf("%f%f%f%f",&d1,&dd1,&d2,&d3);
	float dtb;
	
	if(d1>0 && dd1 > 0 && d2 > 0 && d3 > 0)
	{
		dtb = (d1 + dd1 + d2*2 + d3*3) / 7.0;
		if (dtb >= 8) printf("Gioi");
		else if (dtb < 8 && dtb >= 6.5) printf("Kha");
		else if ( dtb >=5 && dtb < 6.5 ) printf("Trung binh");
		else printf("Yeu"); 
	}
	else printf("INVALID");
	
	
	
	
	return 0;
}
