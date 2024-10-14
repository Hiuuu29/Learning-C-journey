#include<stdio.h>
#include<math.h>
/*dinh nghia eclip
neu p la so nguyen to va 2^p -1 cung la so nguyen to
neu 2 dk tren thoa man thi 2^(p-1)(2^p - 1) la so hoan hao 
vd p = 2 va 2^2 - 1 =3 cx la so nguyen to
2^1.(2^2 - 1) = 6 so hoan hao thu nhat
*/

int nt(long long n){
	if(n<2) return 0;
	for(int i = 2; i <= sqrt(n) ;i++){
		if(n%i == 0 ) return 0;
	}
	return 1;
}

long long dieukien(long long n ){
	
	for(int i = 2; i <= 33; i++){
		if(nt(i)){ // neu i la so nguyen to dk1
			long long tmp = (long long)pow(2,i) - 1;
			if ( nt( tmp ))  // check tiep dk 2
			{
				long long num = tmp * (long long)pow(2,i-1);
				if (num == n ) return 1;
			}
		}
	}
	return 0;
}

int main(){
	
	long long n;
	scanf("%lld", &n);
	if( dieukien(n) ) printf("yes");
	else printf("no");
	
	return 0;
}
