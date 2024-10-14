#include<stdio.h>
/* Fibonacci ( CT Fn= Fn-1 + Fn-2 )
1. ktra xem n co phai nam trong day fibonacci hay ko
2. liet ke n so fibonacci 
3. in ra so fibonacci thu n
*/

int fibonacci1(int n){
	long long fn,fn1,fn2;
	if(n == 0 || n == 1 ) return 1;
	fn1 = 1; fn2 = 0; // f n-1 = 1 f n - 2 =0
	
	for (int i = 2; i <= 92; i++){
		fn = fn1 + fn2;
		if (fn == n) return 1; // neu dung tra ve 1
		fn2 = fn1;
		fn1 = fn;	
	}
	return 0;	 
}

// in ra n so fibo dau tien 0 -> n-1
int fibonacci2(int n1){
	long long fn,fn1,fn2;
	fn1 = 1;
	fn2 = 0;
	if(n1 <= 1){
		for(int i = 0; i < n1 ; i++){
			printf("%lld\n",i);
		}
	}
	else{
		printf("%lld\n",fn2);
		printf("%lld\n",fn1);
		for (int i = 2; i < n1; i++){
		fn = fn1 + fn2; // neu dung tra ve 1
		printf("%lld\n",fn);
		fn2 = fn1;
		fn1 = fn;
		}	
	}
	
	return 0;	 
}

int fibonacci3(int n2){
	long long fn,fn1,fn2;
	fn1 = 1;
	fn2 = 0;
	if(n2 <= 1) printf("1");
	else if (n2 == 0) printf("0");
	else{
		// vong lap tim so thu n
		for (int i = 2; i < n2; i++){
		fn = fn1 + fn2; 
		fn2 = fn1;
		fn1 = fn;
		}	
	}
	return fn;
}

int main()
{
	// ktra xem so n co nam trong day ko
	long long n; // n la so fibonacci.
	scanf("%d",&n);
	if(fibonacci1(n)) printf("yes\n");
	else printf("no\n");
	
	// liet ke n so Fibonacci
	int n1;
	scanf("%d",&n1); //0<=n<=92
	fibonacci2(n1);
	
	// in ra so fibonacci thu n
	int n2;
	scanf("%d",&n2); //0<=n<=92
	printf("%lld\n",fibonacci3(n2));
	return 0;
}
