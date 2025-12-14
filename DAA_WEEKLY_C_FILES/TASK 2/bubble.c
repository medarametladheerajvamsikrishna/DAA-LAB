// ch.sc.u4cse24127
#include <stdio.h>

int main() {
    int n1, i1, j1, t1;
    int v1[100];

    printf("ch.sc.u4cse24127\n");

    printf("Enter number of elements: ");
    scanf("%d", &n1);

    printf("Enter elements:\n");
    for (i1 = 0; i1 < n1; i1++) {
        scanf("%d", &v1[i1]);
    }

    for (i1 = 0; i1 < n1 - 1; i1++) {
        for (j1 = 0; j1 < n1 - i1 - 1; j1++) {
            if (v1[j1] > v1[j1 + 1]) {
                t1 = v1[j1];
                v1[j1] = v1[j1 + 1];
                v1[j1 + 1] = t1;
            }
        }
    }

    printf("Sorted array:\n");
    for (i1 = 0; i1 < n1; i1++) {
        printf("%d ", v1[i1]);
    }

    return 0;
}
