#include<stdio.h>
#include<math.h>
/*  co k2 chu so 2 co k3 chu so 3 co k5 chu so 5 co k6 chu so 6
so iu thich la 32 va 256
su dung cac chu so da co de ghep thanh 32 va 256 , lay cac so ghep dc cong voi nhau sao cho lon nhat

*/
int main()
{
	int k2,k3,k5,k6;
	scanf("%d%d%d%d",&k2,&k3,&k5,&k6);
	int k256 = fmin(k2,fmin(k5,k6));
	int k32 = fmin(k3,k2 - k256);
	
	long long res = 1ll * 256 * k256 + 1ll * k32 * 32;
	printf("%lld",res);
	
	// so luong so 256 co the tao thanh va lay so luong so 2 con lai ghep thanh 32
	
	return 0;
}
