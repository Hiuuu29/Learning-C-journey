#include<stdio.h>
#include<math.h>
/* so dep la so thuan nghich co it nhat 3 uoc so nguyen to khac nhau. in ra cac so dep giua 2 so nguyen cho truoc
*/

int thuannghich(int n){
	int tmp = n;
	int hold = 0;
	while(n){
		hold = 10*hold + n%10;
		n /= 10;
	}
	if (hold == tmp ) return 1;
	else return 0;
}

int uocNT(int n){
	if(n < 2) return 0;
	int cnt = 0;
	for (int i = 2 ; i <= sqrt(n); i++){
		if(n % i == 0){
			cnt++;
			while(n % i == 0){ 
				n /= i;
			}
		}
	}
	if(n>1) cnt++;
	if (cnt>=3) return 1;
	else return 0;
}


int main(){
	
	int a,b;
	scanf("%d %d",&a,&b);
	int c = 0;
	for(int i = a; i <= b ; i++){
		if(uocNT(i) && thuannghich(i)){
		printf("%d ",i);
		c=1;
		}
	}
	if(c == 0) printf("-1");
	
	return 0;
}
