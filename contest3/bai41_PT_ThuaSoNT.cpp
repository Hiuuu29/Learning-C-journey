#include<stdio.h>
#include<math.h>
/* phan tich N thanh thua so nguyen to 
vd 60 = 2^2 x 3^1 x 5^1
*/

void tsnt(long long n ){
	if (n < 2)	printf("1^1");
	
	for (int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0){ // neu co 1 so nguyen to nao chia het cho n
			int mu = 0; // set so mu = 0 de ktra moi lan lap
			while (n % i ==0){ // ktra tat ca cac so mu
				mu++;
				n /= i; // luu y thay doi gia tri n o day se anh huong den dieu kien for
			}
			printf("%d^%d ",i,mu);
			// so nguyen to chi pt ra dc 1 vd n = 13,17,27,.. | cac so nay co dac diem la vong lap se ko ktra dc ma ktra ben ngoai
			if (n != 1)
			printf("* ");
		}
		
	}
	// do thay doi gia tri n nen so cuoi cung se ko dc in ra
	if(n > 1)
	printf("%lld^1", n); // n la so nguyen to cuoi cung va luon la mu 1
}

int main(){
	long long n;
	scanf("%lld",&n);
	
	tsnt(n);
	
}

