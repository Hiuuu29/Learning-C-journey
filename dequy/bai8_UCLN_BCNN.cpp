#include<stdio.h>
#include<math.h>

typedef long long ll;
// gcd (a,b) = (b,a%b)
long long ucln(long long a, long long b){
	if (b == 0) return a;  // neu 1 trong 2 so bang 1 : thi ucln la 1
	else
		return ucln(b,a%b);
}

ll bcnn(long long a, long long b){
	return a/ucln(a,b) * b;	
}

int main(){
	long long a,b;
	scanf("%d%d",&a,&b);
	printf("%d", ucln(a,b));
	printf("\n%d", bcnn(a,b));
	
	
	return 0;
}
