#include<stdio.h>
#include<math.h>
/* trong ngan hang co cac to tien men gia 1 2 5 10 20 50 100 200 500 1000, so luong to tien moi menh gia la ko han che
Mot nguoi can doi so tien co gtri la N. Hay xac dinh xem so luong to tien it nhat la bao nhieu
in ra so luong to tien co it nhat tong = n
*/

int main(){
	
	int n;
	scanf("%d",&n);
	int cnt = 0; //so to tien
	
	// code trau code bo
	/*
	while (n > 0){
		if(n/1000) cnt += n/1000; // neu n/1000 khac 0, cong them so to tien
		n%=1000; // so tien n con lai sau khi doi bang to 1000
		if(n/500) cnt += n/500; 
		n%=500;
		if(n/200) cnt += n/200; 
		n%=200; 
		if(n/100) cnt += n/100; 
		n%=100; 
		if(n/50) cnt += n/50; 
		n%=50; 
		if(n/20) cnt += n/20; 
		n%=20; 
		if(n/10) cnt += n/10; 
		n%=10; 
		if(n/5) cnt += n/5; 
		n%=5; 
		if(n/2) cnt += n/2; 
		n%=2; 
		if(n/1) cnt += n/1; 
		n%=1; 
	}
	*/
	
	int menhgia[10] = {1,2,5,10,20,50,100,200,500,1000};
	for(int i = 9; i >= 0; i--){
		if(n/menhgia[i] != 0) cnt += n/menhgia[i];
		n %= menhgia[i];
	}
	
	printf("%d", cnt);
	
	return 0;
}
