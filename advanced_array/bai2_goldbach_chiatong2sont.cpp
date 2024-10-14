#include<stdio.h>
#include<math.h>
/* input so luong testcase, tach n thanh tong 2 so nguyen to a+b =n
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
		int n; // n phai la so chan
		scanf("%d",&n);
		for(int i = 2; i <= n/2; i++){ // ktra tu 2 den n/2 de tranh lap lai vd 12 : 2-10, 10-2, 5-7, 7-5, ....
			if(prime[i] && prime[n-i]){ // neu i va n - i deu la so nguyen to
				printf("%d %d\n",i,n-i);
			}
		}
	}
	
	return 0;
}
