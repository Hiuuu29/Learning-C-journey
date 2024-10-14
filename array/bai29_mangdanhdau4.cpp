#include<stdio.h>
#include<math.h>
/* tim gtri co so lan xuat hien nhieu nhat trong mang, neu co nhieu gtri co cung so lan, lay gtri nho nhat
*/
int b[1000001] = {0};

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	int max = -1e9;
	int maxb = -1e9;
	for(int i = 0;i < n; i++){
		scanf("%d",&a[i]);
		b[ a[i] ] ++;
		if(max < a[i]) max = a[i];
	}
	int res;
	for(int i = 0; i <= max; i++){
		if ( maxb < b[i] ){
			maxb = b[i];
			res = i; // chay theo i ma i = [0, a[imax]]  , i thuoc 0 den gtri a[i] lon nhat
		}
	}
	
	printf("%d %d", res, maxb);
	
	return 0;
}
