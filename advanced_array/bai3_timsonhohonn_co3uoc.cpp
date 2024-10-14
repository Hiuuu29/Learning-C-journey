#include<stdio.h>
#include<math.h>
/* input so n, tim cac so nho hon n va co dung 3 UOC
la cac so nguyen to binh phuong nho hon n
*/

int prime[1000001];

void sang(){
	for(int i = 0; i <= 1000000; i++){
		prime[i] = 1;
	}
	for(int i = 2; i < sqrt(1000000); i++){
		if(prime[i]){
			for(int j = i*i; j <= 1000000; j += i){ // diem bat dau la i^2, ket thuc khi vuot qua 1000000, moi lan lap + them i de tang boi len
				prime[j] = 0;
			}
		}
	}
}

int main(){
	sang();
	long long n;
	scanf("%d", &n);
	for(int i = 2; i <= sqrt(n); i++){ // ktra tu 2 den n/2 de tranh lap lai vd 12 : 2-10, 10-2, 5-7, 7-5, ....
		if( prime[i] && i*i <= n ){ // neu i va n - i deu la so nguyen to
			printf("%d ", 1ll*i*i);
		}
	}
	
	
	return 0;
}
