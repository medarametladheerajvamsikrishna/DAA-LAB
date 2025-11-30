#include <stdio.h>

void sumofn(int n){
    int sum = 0;
    for(int i = 1; i < n + 1; i++){
        sum += i;
    }
    printf("%d", sum);
}

int main(){
    int n;
    printf("Enter the value for n \n");
    scanf("%d", &n);
    sumofn(n);

    return 0;
}
