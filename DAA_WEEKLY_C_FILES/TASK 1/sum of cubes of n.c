#include <stdio.h>

int main(){
    int n, i, sum = 0;
    printf("enter a numbers n:\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        sum = sum + i * i * i;
    }

    printf("the sum of %d natural numbers is %d", n, sum);

    return 0;
}
