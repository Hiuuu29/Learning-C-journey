#include<stdio.h>
#include<math.h>
/* dem so luong cap bang nhau trong mang
in ra so luong cap ko xet den thu tu
*/

int dem[1000001] = {0};

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	int max = -1e9;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		dem[a[i]]++;
		max = fmax(max, a[i]);
	}
	long long cnt = 0;
	for(int i = 0; i <= max; i++){
		if (dem[i] > 1){ // xuat hien nhieu lan 
			for(int j = 1; j < dem[i]; j++){
				cnt += j;
			}
		}
		// cach 2 su dung to hop chap 2 cua n voi n la tan suat suat hien cua ptu do
	}
	printf("%lld", cnt);
	
	
	return 0;
}
