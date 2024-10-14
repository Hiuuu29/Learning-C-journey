#include<stdio.h>
#include<math.h>
/* nhap a b tim ucll va bcnn
*/
// cach 2 : theo cong thuc UCLN cua a,b = ucll cua (b,a % b) lap lai lien tuc cho den khi a%b == 0
// vd ucln 20 15 : (15, 20%15 = 5) (15,5) (15,5)-> (5,15%5 = 0) ->(5,0-----> UCLN LA 5
long long ucln(long long a, long long b){
	long long res;
	while(b != 0)
	{
		res = a%b;
		a = b;
		b = res;
	}
	return a;
}

// bcnn = tich 2 so nhan ucln
long long bcnn(long long a, long long b){
	return a / ucln(a,b) * b;
}

int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld %lld", ucln(a,b) , bcnn(a,b));
	

	return 0;
}
