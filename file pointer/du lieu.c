#include <stdio.h>
#include <stdlib.h>

int main(){

	int i;
	for (i = 0; i < 10001; ++i)
	{
		int x = rand() % 10000; // random so tu 0 - 9999
		printf("%d ",x);
	}
	return 0;
}