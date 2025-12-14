// ch.sc.u4cse24127
#include <stdio.h>

int main() {
    int n1, i1, j1, k1;
    int a1[100];

    printf("ch.sc.u4cse24127\n");

    printf("Enter number of elements: ");
    scanf("%d", &n1);

    printf("Enter elements:\n");
    for (i1 = 0; i1 < n1; i1++) {
        scanf("%d", &a1[i1]);
    }

    for (i1 = 1; i1 < n1; i1++) {
        k1 = a1[i1];
        j1 = i1 - 1;

        while (j1 >= 0 && a1[j1] > k1) {
            a1[j1 + 1] = a1[j1];
            j1--;
        }
        a1[j1 + 1] = k1;
    }

    printf("Sorted array:\n");
    for (i1 = 0; i1 < n1; i1++) {
        printf("%d ", a1[i1]);
    }

    return 0;
}
