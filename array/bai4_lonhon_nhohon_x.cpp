#include<stdio.h>
#include<math.h>
/* dem xem co bao nhieu so lon va nho hon x
*/

int main(){
	
	int n, x;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int demnho = 0;
	int demlon = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > x) demlon++;
		else if (a[i] < x) demnho++;
	}

	printf("%d %d", demlon, demnho);
	
	return 0;
}
