#include<stdio.h>
#include<math.h>
/* so nguyen duong n duoc goi la sphenic neu no dc phan tich DUY NHAT duoi dang tich 3 thua so nguyen to khac nhau (chi phan tich dc 1 cach)
vd 30  = 2 x 5 x 3
*/

int sphenic(long long n){
	int cnt = 0; // bien de dem cac thua so nguyen to chia dc
	for(int i = 2; i <= sqrt(n) ;i++){
		if(n % i == 0){ // neu co 1 so chia het cho n
			int mu = 0; // cho mu = 0 moi khi lap lai de kiem tra so co bi lap khong
			while(n % i == 0){ // vong lap tim kiem xem so do co chia dc nua ko
				mu++; 	// ktra so mu
				n /= i; // cap nhat lai n de kiem tra
			}
			if (mu >= 2) return 0; // co 2 so nguyen to bi lap
			cnt++;
		}
	}
	if(n > 0) cnt++;
	if (cnt == 3) return 1;
	else return 0;
}

int main(){
	
	long long n;
	scanf("%lld",&n);
	
	if(sphenic(n)) printf("yes");
	else printf("no");
	
	return 0;
}
