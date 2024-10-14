#include<stdio.h>
#include<math.h>
/* cho 2 mang a[n] b[m], mang c va d la mang chi co cac ptu khac nhau cua a va b (loc 2 mang a va b)
in ra mang hop (ptu co 1 trong 2 mang) c va d va mang giao (ptu phai co trong 2 mang) c va d theo thu tu tang dan
*/

int giao[1000001];
int hop[1000001];

int main(){
	
	int n,m;
	scanf("%d%d",&n,&m);
	int max = -1e9;
	for(int i = 0; i < n; i++){
		int x; scanf("%d",&x);
		hop[x] = 1; // danh dau cac gtri da xuat hien = 1 de cho mang giao
		max = fmax(max,x);
		giao[x]++;
	}
	for(int i = 0; i < m; i++){
		int x; scanf("%d",&x);
		hop[x] = 1; // danh dau cac gtri da xuat hien = 1 de cho mang giao
		max = fmax(max,x);
		if( giao[x] == 1 ) giao[x] = 2;// danh dau neu no lon hon 1 thi no da xuat hien o mang 1
	}
	
	for(int i = 0; i <= max; i++){
		if(giao[i] == 2) printf("%d ",i);
	}
	printf("\n");
	for(int i = 0; i <= max; i++){
		if(hop[i]) printf("%d ",i);
	}
	
	
	return 0;
}
