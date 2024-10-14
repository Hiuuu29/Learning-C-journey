#include<stdio.h>
#include<math.h>
/* liet ke cac ptu tu nho den lon kem theo tan suat xuat hien cua no
*/

int b[1000001] = {0};

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	int max = -1e9;
	for(int i = 0;i < n; i++){
		scanf("%d",&a[i]);
		b[ a[i] ] += 1;
		if(max < a[i]) max = a[i];
	}
	
	for(int i = 0; i <= max ;i++){
		if(b[i] != 0){
			printf("%d %d\n", i,b[i] );
		}
	}
	
	return 0;
}
