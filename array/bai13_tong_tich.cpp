#include<stdio.h>
#include<math.h>
/* tim index: so nho nhat lay index cuoi cung
lon nhat lay index dau tien
chia lay du cho 1e9 + 7
*/

int main(){
	
	int n;
	scanf("%d",&n);
	int mod = 1000000007;
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	long long tong = 0;
	long long tich = 1;
	for(int i = 0; i < n; i++){
		tong += a[i];
		tong %= mod;
		tich *= a[i];
		tich %= mod;
	}
	printf("%d %d", tong, tich);
	
	return 0;
}
