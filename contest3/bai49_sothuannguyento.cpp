#include<stdio.h>
#include<math.h>
/* so thuan nguyen to la so nguyen to , tat ca cac chu so la so nguyen to , tong chu so cua no cung la so nguyen to.
DEM xem trong 1 doan giua 2 so nguyen co bao nhieu so thuan nguyen TO
*/


int ktra_cs(int n){
	while(n){
		int r = n%10;
		if(r != 2 && r != 3 && r != 5 && r != 7 ) return 0; //ktra tat ca chu so cua no
		n /= 10;
	}
	return 1;
}

int songuyento(int n){
	if (n<2) return 0;
	for(int i = 2; i <= sqrt(n); i++){ // vong lap ktra so nguyen to
		if( n%i == 0 ) return 0; // ko phai la so nguyen to
	}
	return 1;
}

int tongcs(int n){
	int tong = 0;
	while(n){
		tong += n % 10;
		n /= 10;
	}
	// tinh tong xong ktra tong co phai so nguyen to ko
	if ( songuyento(tong) ) return 1;
	else return 0;
	
}

int main(){
	
	int a,b;
	scanf("%d%d",&a,&b);
	int cnt = 0;
	int d1=0,d2=0,d3=0;
	for (int i = a; i <= b; i++){
		// trong compiler if co nhieu &&, check dieu kien nao sai thi cac dieu kien sau ko check nua 
		// de toi uu sap xep sao cho dieu kien dau si nhieu nhat 
		if(songuyento(i)) d1++;
		if(tongcs(i))  d2++;
		if(ktra_cs(i))d3++;
		
		if(ktra_cs(i) && tongcs(i)  && songuyento(i) ) cnt++;
	}	
	printf("%d %d %d\n", d1,d2,d3);
	printf("%d", cnt);
	
	return 0;
}
