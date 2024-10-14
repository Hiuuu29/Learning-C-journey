#include<stdio.h>
#include<math.h>
/*SO NGUYEN TO
nhap vao n in ra YES neu la so nguyen to NO neu ko
so nguyen to la so nguyen duong co 2 uoc la 1 va chinh no
luon ton tai 1 cap uoc la (i va n/i) 
phan tich n = a*b 1 trong 2 so a va b <= sqrt(n) 
*/

int nguyento(long long n) // do phuc tap lon O(N) -> co gang di chung minh la no khong co cac tinh chat do -> O(logN)
{
	if (n < 2) return 0;
	
	for(int i = 2; i <= sqrt(n) ; i++) // neu trong khoang tu [2,sqrt(n)] 
	{
		if(n % i == 0)	// co them 1 cap uoc khac 1 va n/1 -> ko phai so nguyen to
			return 0;  // ko phai la so nguyen to
	}
	return 1; //day la so nguyen to co 2 uoc
}

int main()
{
	long long n;
	scanf("%lld",&n);
	if(nguyento(n)) printf("YES");
	else printf("NO");
	
	return 0;
}
