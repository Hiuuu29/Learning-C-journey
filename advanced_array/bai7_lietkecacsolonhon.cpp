#include<stdio.h>
#include<math.h>
/* liet ke cac ptu trong day co gtri lon hon tat ca cac so dung truoc no(ptu dau tien index = 0 dc coi la thoa man)
*/

int main(){
	
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	//O(n^2)
	int max = a[0];
	printf("%d ",a[0]); // phan tu dau tien thoa man
//	for(int i = 1; i < n ; i++){
//		int check = 1;
//		for(int j = i - 1; j >= 0; j--){
//			if(a[i] <= a[j]) check = 0; // neu co gtri ko hop le gan check = 0
//		}
//		if(check == 1) printf("%d ",a[i]);
//	}
	// thay vi so sanh voi tung ptu thi chi can so sanh voi thang lon nhat la dc, chi can ss 1 lan
	// O(N)
	for(int i = 1; i < n ; i++){
		if( a[i] > max ){
			max = a[i];
			printf("%d ",a[i]);
		} 
	}
	
	return 0;
}
