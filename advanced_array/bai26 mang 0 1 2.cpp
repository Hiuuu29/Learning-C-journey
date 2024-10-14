#include<stdio.h>
#include<math.h>
/* mang chi co cac ptu 0 1 2 sap xep tu nho den lon
*/
int dem[10];

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		dem[a[i]]++;
	}
	for(int i = 0; i < 3; i++){
		while(dem[i]){
			printf("%d ",i); dem[i]--;
		}
	}
	
	return 0;
}
