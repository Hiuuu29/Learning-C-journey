#include<stdio.h>
#include<math.h>
/* dem tuan suat va in ra theo mau
*/

int cnt[1000001];

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	int max = -1e9;
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
		cnt[a[i]]++;
		max = fmax(max,a[i]); // max chua gtri (value) a[i] lon nhat 
	}
	// theo thu tu tu nho den lon
	for(int i = 0; i <= max; i++){
		if( cnt[i] ){ // neu value cnt[] khac khong, xet theo thu tu cua mang cnt[]
			printf("%d %d\n",i, cnt[i]);
		}
	}
	printf("\n");
	// theo thu tu trong mang a[i]
	for(int i = 0; i < n; i++){
		if( cnt[a[i]] ){ // xet theo thu tu cua mang a[i]
			printf("%d %d\n",a[i], cnt[a[i]]);
			cnt[a[i]] = 0; // khi xong roi cho bang 0 de tranh lap lai o cac index sau
		}
	}


	
	return 0;
}
