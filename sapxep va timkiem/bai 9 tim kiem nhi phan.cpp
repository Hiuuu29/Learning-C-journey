#include<stdio.h>
#include<math.h>
/*  cho mang giam dan dung binary search
*/

int binary(int a[], int n, int x){
	int l = 0, r = n-1;
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid] > x){ // neu gtri giua lon hon gtri can tim (luu y mang giam dan)
			l = mid + 1;
		}
		else if(a[mid] < x){
			r = mid - 1;
		}
		else // mid == x
		return 1;
	}
	return 0;
}


int main(){
	
	int n,x;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	if(binary(a,n,x))
	printf("YES");
	else	
	printf("NO");

	
	
	return 0;
}
