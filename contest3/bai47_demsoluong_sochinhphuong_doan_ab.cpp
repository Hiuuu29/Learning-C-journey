#include<stdio.h>
#include<math.h>
/* dem so luong so chinh phuong trong doan tu a den b
*/

//int dem(long long a, long long b){
//	int dem = 0;
//	for(int i = sqrt(a); i <= sqrt(b) ; i++){
//		if(i*i >= a && i*i <= b){
//			dem++;
//		}
//	}
//	return dem;
//}
//////////////////KHOI CAN DUNG HAM CUNG DC 

int main(){
	
	long long a,b;
	scanf("%lld%lld",&a,&b);
	//printf("%d", dem(a,b));
	int sqrta, sqrtb;
	sqrta = ceil(sqrt(a));
	sqrtb = sqrt(b);
	printf("%d", sqrtb - sqrta +1);
	
	
	return 0;
}
