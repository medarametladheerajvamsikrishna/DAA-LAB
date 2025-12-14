// ch.sc.u4cse24127
#include <stdio.h>

void h1(int a1[], int n1, int i1) {
    int l1, r1, m1, t1;
    m1 = i1;
    l1 = 2 * i1 + 1;
    r1 = 2 * i1 + 2;

    if (l1 < n1 && a1[l1] > a1[m1])
        m1 = l1;
    if (r1 < n1 && a1[r1] > a1[m1])
        m1 = r1;

    if (m1 != i1) {
        t1 = a1[i1];
        a1[i1] = a1[m1];
        a1[m1] = t1;
        h1(a1, n1, m1);
    }
}

int main() {
    int n2, i2, t2;
    int a2[100];

    printf("ch.sc.u4cse24127\n");

    printf("Enter number of elements: ");
    scanf("%d", &n2);

    printf("Enter elements:\n");
    for (i2 = 0; i2 < n2; i2++) {
        scanf("%d", &a2[i2]);
    }

    for (i2 = n2 / 2 - 1; i2 >= 0; i2--)
        h1(a2, n2, i2);

    for (i2 = n2 - 1; i2 > 0; i2--) {
        t2 = a2[0];
        a2[0] = a2[i2];
        a2[i2] = t2;
        h1(a2, i2, 0);
    }

    printf("Sorted array:\n");
    for (i2 = 0; i2 < n2; i2++)
        printf("%d ", a2[i2]);

    return 0;
}
