// ch.sc.u4cse24127
#include <stdio.h>

int main() {
    int n1, i1, j1, k1;
    int a1[100], b1[10][100], c1[10];

    printf("ch.sc.u4cse24127\n");

    printf("Enter number of elements: ");
    scanf("%d", &n1);

    printf("Enter elements (0-99):\n");
    for (i1 = 0; i1 < n1; i1++) {
        scanf("%d", &a1[i1]);
    }

    for (i1 = 0; i1 < 10; i1++)
        c1[i1] = 0;

    for (i1 = 0; i1 < n1; i1++) {
        k1 = a1[i1] / 10;
        b1[k1][c1[k1]++] = a1[i1];
    }

    k1 = 0;
    for (i1 = 0; i1 < 10; i1++) {
        for (j1 = 0; j1 < c1[i1]; j1++) {
            a1[k1++] = b1[i1][j1];
        }
    }

    printf("Sorted array:\n");
    for (i1 = 0; i1 < n1; i1++)
        printf("%d ", a1[i1]);

    return 0;
}
