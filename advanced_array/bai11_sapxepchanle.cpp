#include<stdio.h>
#include<math.h>
/* sap xep mang sao cho so le nam truoc giam dan, so chan nam sau tang dan
*/
void merge(int a[], int l, int m, int r){
	// tam thoi luu cac ptu tu chi so left -> mid vao 1 mang, tu mid + 1 -> right vao 1 mang
	int n1 = m - l + 1, n2 = r - m; 
	int x[n1], y[n2];
	// dua cac ptu tu chi so l -> m vao mang x 
	for(int i = 0; i < n1; i++){
		x[i] = a[l + i];
	}
	// tuong tu voi mang y dua tu mid + 1 -> r
	for(int i = 0; i < n2; i++){
		y[i] = a[m + 1 + i];
	}
	//tron 2 mang x,y gan lai cho mang a[l + r]
	int index = l;
	int i = 0, j = 0;
	while(i < n1 && j < n2){
		// so sanh 2 mang con x,y
		if(x[i] <= y[j]){
			a[index++] = x[i++]; // gan gtri cua mang con vao mang chinh a[] sau do tang index len
		}
		else{
			a[index++] = y[j++];
		}
	}
	// tat ca cac gtri con lai, khi 1 mang con da het, so sanh va gan cac gtri o mang con con lai vao
	while (i < n1){
		a[index++] = x[i++];
	}
	while (j < n2){
		a[index++] = y[j++];
	}
}

// thuat toan merge sort se goi de quy 
void merge_sort(int a[], int l, int r){
	if(l < r){
		int m = (l+r)/2;
		merge_sort(a,l,m); // goi de quy nua ben trai de chia doi den khi con 1 ptu
		merge_sort(a,m + 1,r); // goi de quy nua ben phai de chia doi den khi con 1 ptu (cho den khi l >= r)
		merge(a,l,m,r);
	}
}

int chan[1000000];
int le[1000000];

int main(){
	
	int n;
	scanf("%d", &n);
	int c = 0, l = 0;
	for(int i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		if(x%2 == 0){
			chan[c] = x;  c++;
		}
		else{
			le[l] = x;  l++;
		}
	}
	merge_sort(chan,0, c - 1);
	merge_sort(le, 0, l - 1 );
	for(int i = l-1; i>=0; i--){
		printf("%d ", le[i]);
	}
	for(int i = 0; i < c; i++){
		printf("%d ", chan[i]);
	}
	
	
	return 0;
}
