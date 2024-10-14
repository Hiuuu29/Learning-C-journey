#include<stdio.h>
/* cho 1 ki tu bat ki; chuyen no thanh ki tu tiep theo duoi dang in thuong
*/
int main()
{
	char c;
	scanf("%c",&c);

	if (c == 'z' || c == 'Z')
	printf("a");
	else if(c >= 65 && c < 90)
	{
		c += 33;
		printf("%c",c);
	}
	else
	{
		c += 1;
		printf("%c",c);
	}
	
	return 0;
}
