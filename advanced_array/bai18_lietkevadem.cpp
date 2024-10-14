#include<stdio.h>
#include<math.h>
/* cho 1 day cac so nguyen duong ko qua 9 chu so, moi so cach nhau vai khoang trong va co the xuong dong.
hay tim cac day ko giam (theo thu tu tu trai qua phai) va dem so lan xuat hien cua cac day ko giam do
*/


// ko biet truoc dc do lon cua mang
int main(){
	
	int n;
	scanf("%d",&n);
	
	int menhgia[10] = {1,2,5,10,20,50,100,200,500,1000};
	for(int i = 9; i >= 0; i--){
		if(n/menhgia[i] != 0) cnt += n/menhgia[i];
		n %= menhgia[i];
	}
	
	printf("%d", cnt);
	
	return 0;
}
