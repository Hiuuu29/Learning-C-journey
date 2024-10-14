#include<stdio.h>
#include<math.h>
/* tong cac day con k
*/   // KHONG CHAY TREN DEV C DC
int main(){
	
	int a[10000];
	int tmp, n = 0;
	while(scanf("%d", &tmp) != -1){ // scanf doc cac so va tra ve so byte khi ko them so nao nua thi tra ve -1
		a[n] = tmp;
		n++;
	}
	int chan = 0;
	int le = 0;
	for(int i = 0; i < n ; i++){
		if(a[i] % 2 ==0 ) chan++;
		if(a[i] % 2 == 1 ) le++;
	}
	if (chan > le) printf("chan");
	else if (chan < le) printf("le");
	else printf("chan - le");
	
	return 0;
}
