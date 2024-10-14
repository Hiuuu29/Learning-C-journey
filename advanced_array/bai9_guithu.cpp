#include<stdio.h>
#include<math.h>
/* o tren truc Ox co cac thanh pho, cac thanh pho gui thu cho nhau voi chi phi = khoang cach den cac thanh pho
tinh mini va maxi la chi phi toi thieu gui tu thanh pho i den 1 thanh pho khac va chi phi toi da de gui thu tu tp i den cac thanh pho khac
xi la toa do cac thanh pho
input n la so luong thanh pho, mang[n] co cac xi la toa do cua thanh pho do
Doi voi moi thanh pho in ra gtri min va max tren 1 dong (xet min max cua tung thanh pho)
*/

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n;i++){
		scanf("%d",&a[i]);
	}
	int min,max;
	// tim khoang cach 2 thanh pho nho nhat
	for(int i = 0; i < n; i++){
		// min
		if( abs(a[i] - a[i-1]) > abs(a[i] - a[i+1]) )  min = abs(a[i] - a[i+1]);
		else  min = abs(a[i] - a[i-1]);
		//max
		if( abs(a[i] - a[0]) > abs(a[i] - a[n-1]) )  max = abs(a[i] - a[0]);
		else  max = abs(a[i] - a[n-1]);
		printf("%d %d\n",min, max);
	}
	
	
	return 0;
}
