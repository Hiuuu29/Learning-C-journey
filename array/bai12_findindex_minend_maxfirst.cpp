#include<stdio.h>
#include<math.h>
/* tim index: so nho nhat lay index cuoi cung
lon nhat lay index dau tien
*/

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int idmin;
	int min = 1e9;
	int idmax;
	int max = -1e9;
	for(int i = 0 ; i< n ; i++){
		if(min >= a[i]){
			min = a[i];
			idmin = i;
		}
	}
	
	for(int i = n; i >= 0; i--){
		if(max <= a[i]){
			max = a[i];
			idmax = i;
		}
	}
	
	printf("%d %d", idmin, idmax);
	
	return 0;
}
