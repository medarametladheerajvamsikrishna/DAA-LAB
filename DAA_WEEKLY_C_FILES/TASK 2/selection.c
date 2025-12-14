// ch.sc.u4cse24127
#include <stdio.h>

int main() {
    int n2, i2, j2, p2, t2;
    int a2[100];

    printf("ch.sc.u4cse24127\n");

    printf("Enter number of elements: ");
    scanf("%d", &n2);

    printf("Enter elements:\n");
    for (i2 = 0; i2 < n2; i2++) {
        scanf("%d", &a2[i2]);
    }

    for (i2 = 0; i2 < n2 - 1; i2++) {
        p2 = i2;
        for (j2 = i2 + 1; j2 < n2; j2++) {
            if (a2[j2] < a2[p2]) {
                p2 = j2;
            }
        }
        t2 = a2[i2];
        a2[i2] = a2[p2];
        a2[p2] = t2;
    }

    printf("Sorted array:\n");
    for (i2 = 0; i2 < n2; i2++) {
        printf("%d ", a2[i2]);
    }

    return 0;
}
