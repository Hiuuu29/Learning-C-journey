#include<stdio.h>
#include<math.h>
/* liet ke so luong so
so nguyen to trong mang
so thuan nghich trong mang
so chinh phuong trong mang
tong chu so la so nguyen to
*/
int nguyento(int n){
	for(int i = 2; i<= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n>1;
}

int thuannghich(int n){
	int lat = 0;
	int res = n;
	while(n != 0){
		lat = lat*10 + n%10;
		n /= 10;
	}
	if (res == lat) return 1;
	else return 0;
}

int chinhphuong( int n){
	int res = sqrt(n);
	if (res*res == n) return 1;
	else return 0;
}

int tongcs(int n){
	int tong = 0;
	while(n){
		tong += n%10;
		n /= 10;
	}
	if( nguyento(tong) ) return 1;
	else return 0;
}

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int cnt1 = 0;
	int cnt2 = 0;
	int cnt3 = 0;
	int cnt4 = 0;
	for (int i = 0; i < n; i++) {
		if( nguyento( a[i] )) cnt1++;
		if( thuannghich( a[i] )) cnt2++;
		if( chinhphuong( a[i] )) cnt3++;
		if( tongcs( a[i] )) cnt4++;
	}
	printf("%d %d %d %d ", cnt1,cnt2,cnt3,cnt4);
	
	
	return 0;
}
