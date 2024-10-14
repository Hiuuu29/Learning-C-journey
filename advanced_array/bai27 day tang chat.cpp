#include<stdio.h>
#include<math.h>
/* dem so lan them d, de mang tro thanh 1 day tang chat
*/
int main(){
	
	int n,d;
	scanf("%d%d",&n,&d);
	long long a[n];
	for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	long long cnt = 0;
	for(int i = 1; i < n; i++){
		if( a[i] <= a[i-1] ){ // neu ptu ben phai nho hon hoac bang ben trai
			long long tmp = a[i-1] - a[i] + 1; // cong ben phai len
			int q;
			if(tmp % d == 0) q= tmp/d;
			else q= tmp/d + 1;
			cnt += q;
			a[i] += q*d;
		}
	}
	printf("%lld", cnt);
	
	
	return 0;
}
