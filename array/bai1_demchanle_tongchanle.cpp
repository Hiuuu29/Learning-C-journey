#include<stdio.h>
/* dem xem trong mang co bao nhieu so chan, bao nhieu le
tong chan, tong le
*/

void demchan(int arr[], int n){
	int demchan = 0;
	for (int i = 0; i < n; i++){
		if(arr[i] % 2 == 0) demchan++; // dem xem co bao nhieu so chan
	}
	printf("%d\n", demchan); // in ra so luong so chan
}

void demle(int arr[], int n){
	int demle = 0;
	for (int i = 0; i < n; i++){
		if(arr[i] % 2 == 1) demle++; // dem xem co bao nhieu so chan
	}
	printf("%d\n", demle); // in ra so luong so le
}

int tongchan(int arr[], int n){
	int tong = 0;
	for (int i = 0; i < n; i++){
		if(arr[i] % 2 == 0) tong += arr[i]; 
	}
	return tong;
}

int tongle(int arr[], int n){
	int tong = 0;
	for (int i = 0; i < n; i++){
		if(arr[i] % 2 == 1) tong += arr[i]; 
	}
	return tong;
}

int main(){
	
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	demchan(arr,n);
	demle(arr,n);
	printf("%d\n", tongchan(arr,n));
	printf("%d\n", tongle(arr,n));
	
	return 0;
	
}
