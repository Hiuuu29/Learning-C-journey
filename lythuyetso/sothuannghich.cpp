#include<stdio.h>
#include<math.h>
/*SO THUAN NGHICH
so doc tu trai qua phai hay nguoc lai dau giong nhau (doi xung 2 ben) 
// lat nguoc so no lai r so sanh no voi luc dau
*/

int thuannghich(int n){
	int lat = 0;
	while(n != 0){
		lat = lat*10 + n%10;
		n /= 10;
	}
	return lat;
}

int main()
{
	int n;
	scanf("%d",&n);
	if ( thuannghich(n) == n )
	printf("YES");
	else
	printf("NO");
	
	
	return 0;
}
