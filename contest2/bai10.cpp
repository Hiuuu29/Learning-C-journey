#include<stdio.h>
#include<math.h>
/*nhap 1 day so  ko qua 10000. phat hien trong qua trinh nhap co 2022 ko
*/
int main(){
	int n; // so luong so nguyen se nhap
	scanf("%d",&n);
	int check = 0;
	for (int i = 1 ;i<= n;i++)
	{
		int a;
		scanf("%d",&a);
		if(a == 2022) check =1;
	}
	if(check==1) printf("YES");
	else printf("NO");
	return 0;
}
