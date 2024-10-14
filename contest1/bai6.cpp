#include<stdio.h>
#include<math.h>
/*
N có ph?i là s? chan?
N có ph?i là s? vua chia het cho 3 vua chia het cho 5?
N có ph?i là s? chia het 3 nhung không chia het cho 77
N có ph?i là s? chia het cho 3 hoac 7?
N là s? lon hon 30 và nho hon 50?
N có ph?i là so không nho hon 30 và chia het cho ít nhat mot trong 3 s? 2, 3, 5
N có ph?i là so có 2 ch? so có chu tan cùng là mot so nguyên to?
N có ph?i là so không vuot quá 100 và chia het cho 23?
N không thuoc doan [10, 20]?
N có ch? s? t?n cùng là b?i s? c?a 3?
Input:

S? nguyên duong N

Constraints:

1 <= N <= 10^6
*/
int main()
{
	int n;
	scanf("%d",&n);
	// so chan
	if(n%2 == 0)	printf("Yes\n");
	else 	printf("No\n");
	
	// chai het cho 3,5
	if(n%3 == 0 && n%5 == 0)	printf("Yes\n");
	else 	printf("No\n");
	
	// chia het cho 3 ko chia het cho  7
	if(n%3 == 0 && n%7 != 0)	printf("Yes\n");
	else 	printf("No\n");
	
	// chia het cho 3 hoac 7
	if(n%3 == 0 && n%7 == 0)	printf("Yes\n");
	else 	printf("No\n");
	
	//>30 <50
	if(n>30 && n<50)	printf("Yes\n");
	else 	printf("No\n");
	
	//>30 va chia het cho 1 trong 3 : 2,3,5
	if(n>30 &&  ((n%2 == 0) || (n%3 == 0) || (n%5 == 0)) )	printf("Yes\n");  
	else 	printf("No\n");
	
	// so co 2 chua so && chu so tan cung la so nguyen to
	if(n>=10 && n<100 && ((n%10 == 3) || (n%10 == 2) || (n%10 == 5) || (n%10 == 7)))	printf("Yes\n");  
	else 	printf("No\n");
	
	// <100 va chia het cho 23
	if(n%23 == 0 && n<=100)	printf("Yes\n");
	else 	printf("No\n");
	
	// ko thuoc doan [10,20]
	if(n< 10 || n>20)	printf("Yes\n");
	else 	printf("No\n");
	
	// chu so tan cung la boi cua 3
	if((n%10 == 3) || (n%10 == 6) || (n%10 == 9))	printf("Yes\n");  
	else 	printf("No\n");
	
	return 0;
}
