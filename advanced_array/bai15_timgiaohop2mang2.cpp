#include<stdio.h>
#include<math.h>
/* cho 2 mang a[n] b[m], da dc sap xep tang dan , cac ptu trong mang la doi 1 khac nhau. hay tim giao va hop giua 2 mang
do phuc tap mong muon O(m+n)
*/

// su dung merge
int giao[1000001];
int hop[1000001];

int main(){
	
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0; i < m; i++){
		scanf("%d",&b[i]);
	}
	int i = 0, j = 0;\
	int index = 0;
	int indexg = 0;
	while(i < n && j < m){
		if( a[i] < b[j] ){ // ptu mang 1 nho hon mang 2
			hop[index] = a[i]; ++i; // luu ptu mang 1 do vao va cong index o mang 1
			++index;
		}
		else if( a[i] > b[j] ){// ptu mang 2 nho hon mang 1
			hop[index] = b[j]; ++j;// luu ptu mang 2 do vao va cong index o mang 2
			++index;
		}
		else{ // neu ca 2 phan tu bang nhau
			hop[index] = a[i]; // luu ptu do vao mang 1 hay 2 deu duoc(do bang nhau)
			giao[indexg]= a[i];
			++i;++j; // cong index o ca 2 mang
			++index;
			++indexg;
		}
	}
	while(i < n) {
		hop[index] = a[i]; ++i; ++index;
	}
	while(j < m) {
		hop[index] = b[j]; ++j; ++index;
	}
	for(int i = 0; i < index; i++){
		printf("%d ", hop[i]);
	}
	printf("\n");
	for(int i = 0; i < indexg; i++){
		printf("%d ", giao[i]);
	}

	
	
	return 0;
}
