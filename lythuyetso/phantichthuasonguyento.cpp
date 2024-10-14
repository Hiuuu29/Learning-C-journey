#include<stdio.h>
#include<math.h>
/*PHAN TICH THUA SO NGUYEN TO 
nhap vao so n phan tich no ra
phuong phap trial : tim uoc nguyen to nho nhat

CONG THUC TINH RA SO LUONG UOC : ptich cac thua so nguyen to xong -> lay so mu + 1 sau do nhan voi nhau
vd : 60 = 2^2*5*3 = 3*2*2 =12 uoc 1 2 3 4 5 6 10 12 15 30 60 20
*/

void ptich(int n)
{
	for(int i = 2 ; i<= sqrt(n) ; i++) // O(log n)
	{
		if(n % i == 0) // n chia het cho i 
		{
			// i la thua so nguyen to cua n
			while(n%i == 0) // chung nao n con chi ahet cho i thi cho chia tiep
			{
				printf("%d ",i);
				n /= i;
			}
		}
	}
	if(n != 1) // neu chia het thi n phai bang 1
		printf("%d",n);
}

int main()
{
	int n;
	scanf("%d",&n);
	ptich(n);
	return 0;
}
