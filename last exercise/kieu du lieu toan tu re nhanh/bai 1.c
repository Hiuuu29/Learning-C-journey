#include <stdio.h>
#include <math.h>

int main(){
    int n = 123456789;
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        if(sum > 10) break;
        n /= 10;
    }
    printf("%d ", n % 10);
    printf("%d %d", sum, n);
    return 0;
}
