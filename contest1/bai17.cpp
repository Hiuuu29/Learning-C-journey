#include<stdio.h>
/* nhap 1 chu cai tra no la in hoa, inthuong, so, hay ki tu dac biet
*/

int main()
{
	char c;
	scanf("%c", &c);
	
	if (c >= 'A' && c <= 'Z')
	{
		printf ("UPPER");
	} 
	else if(c >= 'a' && c <= 'z')
	{
		printf ("LOWER");
	}  
	else if (c >= '0' && c <= '9') 
	{
		printf("NUM");
	}
	else 
	{
		printf("SPECIAL");
	}
	return 0;
}
