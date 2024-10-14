#include<stdio.h>
#include<math.h>
/* tinh trung binh cong cac so nguyen to trong mang
*/

int nt(int a){
	if(a < 2) return 0; // ko phai so nguyen to
	for(int i = 2; i <= sqrt(a); i++){
		if (a % i == 0) return 0;
	}
	return 1;
}

int tongnt(int a){
	if(a < 2) return 0; // ko phai so nguyen to
	for(int i = 2; i <= sqrt(a); i++){
		if (a % i == 0) return 0; // ko phai so nguyen to
	}
	return a; // a la so nguyen to tra ve a
}

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int dem = 0; // dem xem co bao nhieu so nguyen to
	int tong = 0; // tong cac so nguyen to
	for (int i = 0 ; i < n; i++){ // vong lap ktra xem co bao nhieu so nguyen to
		if( nt(a[i]) ){
			dem++;
			tong += a[i];
		}
	}
	printf("%.3lf", (double)tong/dem);
	
	return 0;
	
}
