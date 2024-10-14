#include<stdio.h>
#include<math.h>
/* ktra mang co tang chat hay ko, ptu dung sau luon lon hon ptu dung truoc
*/

int main(){
	
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 1; i < n ; i++){
		if( a[i] < a[i-1] ){
			printf("No");
			return 0;
		}
	}
	printf("yes");
	
	return 0;
}
