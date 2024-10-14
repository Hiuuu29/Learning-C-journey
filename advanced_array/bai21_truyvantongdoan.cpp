#include<stdio.h>
#include<math.h>
/* cho mang a[n] , tinh tong cac chi so trong day tu chi so l den r // xem lai mang cong don
input 2 dong dau la n va a[n]
2 dong sau la so luong truy van Q va chi so l r
*/


int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	long long f[n];
	for(int i = 0; i < n; i++){
		if( i == 0 ) f[0] = a[0];
		else{
			f[i] = a[i] + f[i-1];
		}
	}
	int q;
	scanf("%d",&q);
	while(q--){
		int l,r;
		scanf("%d%d",&l,&r);
		--l;--r;
		if(l == 0) printf("%lld",f[r]);
		else printf("%lld",f[r] - f[l-1]);
	}
	
	return 0;
}
