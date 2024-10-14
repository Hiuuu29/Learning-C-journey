#include<stdio.h>
#include<math.h>
/* tinh trung binh cong cac so nguyen to trong mang
*/

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int dem = 0;
	int min = a[0];
	for(int i = 1; i < n; i++){
		if(min >= a[i]){
			min = a[i];
		} 
		// min = fmin(min,a[i]); dung thay cho if
	} // het vong lap tim dc so nho nhat
	for(int i = 0; i < n; i++){
		if(min == a[i]){
			dem++;
		} 
	}
	printf("%d", dem);
	
	return 0;
}
