#include<stdio.h>
#include<math.h>
/*UCLN VA BCNN
*/

// cach 1
/*
int ucll(int a, int b){
	if( a==0 || b ==0){
		return a+b;
	}
	for(int i = fmin(a,b) ; i >= 1 ; i--){ // so sanh 2 so xem so nao nho nhat. 
		if( a%i == 0 && b%i ==0 )		  // sau do chay tu so nho hon den 1: xem so dau tien ma chia het cho ca 2 la UCLL
			return i;
	}
	return 1;
}
*/

// cach 2 : theo cong thuc UCLN cua a,b = ucll cua (b,a % b) lap lai lien tuc cho den khi a%b == 0
// vd ucln 20 15 : (15, 20%15 = 5) (15,5) (15,5)-> (5,15%5 = 0) ->(5,0-----> UCLN LA 5

int ucll(int a, int b){
	int res;
	while(b != 0)
	{
		res = a%b;
		a = b;
		b = res;
	}
	return a;
}
// bcnn = tich 2 so chia ucln
int bcnn(int a, int b){
	return a*b/ucll(a,b);
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d",ucll(a,b), bcnn(a,b));
;	
	return 0;
}
