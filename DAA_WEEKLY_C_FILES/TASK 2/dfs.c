// ch.sc.u4cse24127
#include <stdio.h>

int a2[100][100], v3[100], v4;

void d1(int s2) {
    int i2;
    printf("%d ", s2);
    v3[s2] = 1;

    for (i2 = 0; i2 < v4; i2++) {
        if (a2[s2][i2] == 1 && v3[i2] == 0) {
            d1(i2);
        }
    }
}

int main() {
    int e2, i2, x2, y2, s2;

    printf("ch.sc.u4cse24127\n");

    printf("Enter number of vertices: ");
    scanf("%d", &v4);

    printf("Enter number of edges: ");
    scanf("%d", &e2);

    printf("Enter edges (u v):\n");
    for (i2 = 0; i2 < e2; i2++) {
        scanf("%d %d", &x2, &y2);
        a2[x2][y2] = 1;
        a2[y2][x2] = 1;
    }

    printf("Enter starting vertex: ");
    scanf("%d", &s2);

    printf("DFS Traversal: ");
    d1(s2);

    return 0;
}
