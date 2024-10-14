#include<stdio.h>
#include<math.h>
/* ktra xem so N co so luong uoc la le hay khong
*/

void check(long long n){
	int dem = 0;
	for(int i = 1; i <= sqrt(n) ; i++){
		if(n % i == 0){
			dem++;
			if(i != n/i) dem++;
		}
	}
	if( dem %2 == 0) printf("no");
	else printf("yes");
}
// thoi gian qua lau sua lai: cac so thuong ton tai theo cap ->  so chinh phuong se la so co uoc le -> chi can ktra so chinh phuong la dc

int check2(long long n){
	int i = sqrt(n);
	if(1ll* i * i == n) return 1;
	else return 0;
	
}

int main(){
	
	long long n;
	scanf("%lld", &n);
	//check(n);
	if(check2(n)) printf("yes");
	else printf("no");
	
	return 0;
}
