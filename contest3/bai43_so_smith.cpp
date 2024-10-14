#include<stdio.h>
#include<math.h>
/*tim so smith
so smith la so ko phai so nguyen to va co tong các CHU SO = tong cac CHU SO cua thua so nguyen to khi phan tich
vd n =666 : tsnt : 2, 3, 3, 37
6+6+6 = 2+3+3+3+7
*/

int tongcs(int n){
	int sum;
	while(n){
		n += n%10;
		n /= 10;
	}
	return sum;
}


int smith(int n){
	int tmp = n;
	if(n < 2) return 1;
	int sum1 = tongcs(n);
	int sum2 = 0;
	for(int i = 2; i <= sqrt(n) ; i++){
		if(n % i == 0)
			while( n % i == 0 ){
				sum2 += tongcs(i);
				n /= i;
			}
	}
	if(n > 1) sum2 += tongcs(n);
	if( tmp == n ){
		return 0;
	}
	else if (sum1 == sum2)
		return 1;
	else return 0;
}



int main(){
	
	int n;
	scanf("%d",&n);
	if(smith(n)) printf("yes");
	else printf("no");
	
	return 0;
}
