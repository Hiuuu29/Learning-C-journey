#include<stdio.h>
#include<math.h>
/*liet ke so chinh phuong ko vuot qua n
so chinh phuong la binh phuong cua 1 so nguyen
*/
int main(){
	long long n;
	scanf("%lld",&n);
	for (int i = 1 ;i<= sqrt(n);i++)
	{
		printf("%d ", i*i*1ll);
	}
	return 0;
}
