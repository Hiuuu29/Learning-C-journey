#include<stdio.h>
#include<math.h>
/* chen ptu x vao vi tri k trong mang sau do in ra mang
chen vao day cac ptu phia ben phai len, cac ptu phia ben trai ko doi
*/

int main(){
	// x gtri, k vi tri
	int n,x,k;
	scanf("%d%d%d",&n,&x,&k);
	int a[n + 1];
	for(int i = 0;i < n; i++){
		scanf("%d",&a[i]);
	}
	// dich chuyen gtri cac ptu tu vi tri k den vi tri n - 1
	// phai dich chuyen tu ben phai ve (tu cuoi ve) de tranh mat gtri
	k--;
	for(int i = n; i > k; i--){
		a[i] = a[i-1];
	}
	a[k] = x;
	
	
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}
