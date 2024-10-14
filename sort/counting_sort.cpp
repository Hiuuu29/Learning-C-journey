#include<stdio.h>
#include<math.h>
/* sap xep dem phan phoi :  counting sort
Y tuong : dem xem moi gtri xuat hien bao nhieu lan, sau do in tu be den lon
do phuc tap O(n+k)

Dieu kien : khai bao 1 mang dem co do lon la max_value + 1, max_value la ptu lon nhat trong mang (mang danh dau)
cac ptu ko dc la so am, hoac qua lon
*/

void counting(int a[], int n){
	// tim gtri lon nhat trong mang
	int k = -1e9;
	for(int i =0; i < n; i++){
		k = fmax(k,a[i]);
	}
	// khoi tao mang co do lon k + 1
	int cnt[k + 1] = {0};
	for(int i = 0; i < n; i++){
		cnt[a[i]]++;
	}
	// vong lap qua mang co do lon k + 1
	for(int i = 0; i <= k; i++){
		for(int j = 0; j < cnt[i]; j++){ // in ra cac gtri xuat hien trong mang ban dau
			printf("%d ",i);
		}
	}
}
	

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	counting(a,n);
	
	return 0;
}
