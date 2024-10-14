#include<stdio.h>
#include<math.h>
/* in so chan , index cung phai chan
neu ko co in ra none
*/

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int flag = 0;
	for(int i = 0; i < n; i++){
		if (a[i] % 2 == 0 && i % 2 == 0){
			printf("%d ",a[i]);
			flag = 1;
		}
	}
	if(flag == 0) printf("NONE");

	return 0;
}
