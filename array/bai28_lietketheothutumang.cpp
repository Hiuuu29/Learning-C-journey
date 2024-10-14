#include<stdio.h>
#include<math.h>
/* liet ke cac ptu theo thu tu cua mang (ptu da xuat hien r chi xuat hien 1 lan) kem theo tan suat xuat hien cua no
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
	
	for(int i = 0;i < n; i++){
		// in ra a[i] va b[a[i]]
		if(b[a[i]] != 0){
			printf("%d %d\n", a[i], b[a[i]]);
			b[a[i]] = 0; // dem xong cho tan suat no = 0 de dieu kien tren sai
		}
	}
	
	return 0;
}
