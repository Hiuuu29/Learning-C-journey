#include<stdio.h>
#include<math.h>
/* PT TSNT dua ra so thu k
vd n = 28 k = 3 : 28 = 2x2x7 => output : 7
neu ko co in ra -1
*/

int tsnt(int n, int k){
	int cnt = 0;
	for (int i = 2; i <= sqrt(n) ; i++){
		if(n%i ==0){
			while( n%i == 0 ){
				cnt++;
				if(cnt  == k) return i;
				n /= i; 
			}
		}
	}
	if(n > 1) cnt++;
	if (cnt == k) return n;
	else
	return -1;
}

int main(){
	
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d", tsnt(n,k));
	
	
	return 0;
}
