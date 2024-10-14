#include<stdio.h>
/* LUY THUA NHI PHAN
vd 5^21. phan tich so mu theo ma nhi phan 21 = 10101
5^21 = 5^(2^0) * 5^(2^2) * 5^(2^4) = 5 * 5^4 * 5^16 = 5^21
*/


// luy thua nhi phan a^b : do phuc tap O(n)
long long lt(int a, int b){
	long long res = 1;
	for(int i = 1; i <= b; i++){
		res *=a;
	} 
	return res;
}

// cach 2 do phuc tap O(log n) phan tich so mu
long long lt2 (long long a, long long b){
	long long res = 1; // tao bien chua ket qua
	// xet tung bit cua b (b la so mu) chuyen doi b thanh ma nhi phan
	while(b != 0 ){
		// xet tung bit cua b tu cuoi den dau
		if (b%2 == 1){ // neu bit cuoi == 1 , bit cuoi cung la 1
			res *= a;
		}
		a *= a;  // cap nhat so mu de tinh
		b/=2; // xoa bit cuoi cung sau khi tinh 
	}
	return res;  
}

int main(){
	
	int  a,b;
	scanf("%d%d",&a,&b);
	printf("%lld",lt2(a,b));
	
	
	return 0;
}
