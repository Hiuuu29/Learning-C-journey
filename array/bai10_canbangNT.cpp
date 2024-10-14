#include<stdio.h>
#include<math.h>
/* can bang nguyen to tra ve index sao cho ben trai va phai so do la so nguyen to
*/

int nt(int n){
	for(int i = 2 ; i < sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return n > 1;
	
}

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	
	for(int i = 0; i < n; i++){
		int left = 0, right = 0;
		for (int j = 0; j < n; j++){
			left += a[j];
		}
		
		for (int j = i + 1; j < n; j++){
			right += a[j];
		}
		
		if(nt(left) && nt(right)) printf("%d ",i);
	}
	
	return 0;
}

