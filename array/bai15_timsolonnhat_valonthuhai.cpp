#include<stdio.h>
#include<math.h>
/* tim so lon nhat va so lon thu hai trong mang
*** 2 so nay co the giong nhau
*/

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int max1 = -1e9;
	int max2 = -1e9;
	for(int i = 0; i < n; i++){
		if(a[i] > max1){
			max2 = max1; // cap nhat lai max 2
			max1 = a[i];
		}
		else if( a[i] > max2 && a[i] < max1 )
			max2 = a[i];
	}
	
	printf("%d %d", max1, max2);
	
	return 0;
}

