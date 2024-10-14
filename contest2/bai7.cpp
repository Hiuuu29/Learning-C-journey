#include<stdio.h>
/* dem so luong uoc va liet ke tu nho den lon
*/
int main(){
	int n;
	scanf("%d",&n);
	int a;
	for( int i = 1;i<=n;i++){
		if(n%i == 0 ) // neu chia het (la uoc)
		{
			a++;	// so uoc
		}
	}
	printf("%d\n",a);
	for( int i = 1;i<=n;i++){
		if(n%i == 0 ) // neu chia het (la uoc)
		{
			printf("%d ",i);
		}
	} 
}
