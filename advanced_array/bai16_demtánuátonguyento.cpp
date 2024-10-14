#include<stdio.h>
#include<math.h>
/* dem tan suat so nguyen to xuat hien trong day va in ra theo thu tu xuat hien trong day
value trong mang ko qua 1e9
so ptu trong mang ko qua 10000
*/

// su dung ham so nguyen to do value qua lon
int nt(int n){
	for(int i = 2; i < sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}



int main(){
	int a[10000];
	int n;
	int tmp;
	while( scanf("%d",&tmp) != -1 ){
		a[n] = tmp; n++;
	}
	for(int i = 0; i < n; i++){
		int check = 1;
		for(int j = 0; j < i; j++){
			if( a[i] == a[j] ){
				check = 0; 
				break;
			}
		}
		if(check){
			if(nt(a[i])){
				int cnt = 1;
				for(int j = i + 1; j < n; j++){
					if( a[i] == a[j]){
						++cnt;
					}
				}
				printf("%d %d", a[i], cnt);
			}
		}
	}
	
	return 0;
}
