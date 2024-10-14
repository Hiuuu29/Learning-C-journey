#include<stdio.h>
/* nhap 1 chu cai neu in hoa -> in thuong, in thuong -> inhoa
eu ko ko thay doi
*/

int main()
{
	char c;
	scanf("%c", &c);
	
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		printf("%c",c);
	} 
	else if(c >= 'a' && c <= 'z')
	{
		c -= 32;
		printf("%c",c);
	}  
	else 
	{
		printf("%c",c);
	}
	return 0;
}
