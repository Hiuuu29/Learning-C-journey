#include<stdio.h>
/* dora leo cau thang co n buoc, co the leo 1 or 2 buoc moi lan di chuyen 
muon so lan di chuyen toi thieu la boi so cua so nguyen m
neu bat kha thi in -1
*/

int main()
{
	int m,n;
	scanf("%d%d", &n,&m);
	int min;
	if(n%2 == 0 ) // so bac la chan
	{ //so luong bac toi da la n
		min = n/2; // so luong bac toi thieu la n/2
	}
	else // so bac la le
	{ //so luong bac toi da la n
		min = n/2 + 1; // so luong bac toi thieu la n/2
	}
	printf("%d", (min/m + 1)*m );
	
	return 0;
}
