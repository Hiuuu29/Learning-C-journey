#include<stdio.h>
/*cho a b n. xac dinh xem ax + by = n co nghiem nguyen ko am hay ko
 */
int main()
{
	int a,b,n;
	scanf("%d%d%d",&a,&b,&n);
	
	for(int i = 0;i <= n/a; i++) // xet x tu [0,n/a]
	{
		int y = n-a*i;
		if(y%b == 0) // neu chia het cho b thi nghiem y nguyen
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	
	return 0;
}
