//#include<stdio.h>
//// tinh x^^^3 + 3x^2 +x +1
//int main(){
//	int x; 
//	scanf("%d", &x);
//	
//	long long rew = 1ll* x*x*x + (long long) 3*x*x + x +1;
//	printf("%lld", rew);
//}
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int v1;
	int * v2;
	unsigned char ** v4;
	unsigned char v3[12] = "Hello World";
	unsigned char * v5[2];
	
	v1 = 1;
	v2 = &v1;
	v4 = &v2;
	v5[1] = &v3[0] + *v2;
	v5[0] = v4[0];
	
	v3[2] = *v5[0];
	
	return *v5[1];
}
