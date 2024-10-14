#include<stdio.h>
#include<math.h>
/* input so luong testcase, sau do nhap cac so de ktra xem co phai so nguyen to ko
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
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(prime[n]){
			printf("yes\n");
		}
		else printf("no\n");
	}
	
	return 0;
}
