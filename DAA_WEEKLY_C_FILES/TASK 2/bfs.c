// ch.sc.u4cse24127
#include <stdio.h>

int main() {
    int v1, e1, i1, j1, s1;
    int q1[100], f1 = 0, r1 = -1;
    int a1[100][100] = {0};
    int v2[100] = {0};

    printf("ch.sc.u4cse24127\n");

    printf("Enter number of vertices: ");
    scanf("%d", &v1);

    printf("Enter number of edges: ");
    scanf("%d", &e1);

    printf("Enter edges (u v):\n");
    for (i1 = 0; i1 < e1; i1++) {
        scanf("%d %d", &j1, &s1);
        a1[j1][s1] = 1;
        a1[s1][j1] = 1;
    }

    printf("Enter starting vertex: ");
    scanf("%d", &s1);

    q1[++r1] = s1;
    v2[s1] = 1;

    printf("BFS Traversal: ");
    while (f1 <= r1) {
        j1 = q1[f1++];
        printf("%d ", j1);

        for (i1 = 0; i1 < v1; i1++) {
            if (a1[j1][i1] == 1 && v2[i1] == 0) {
                q1[++r1] = i1;
                v2[i1] = 1;
            }
        }
    }

    return 0;
}
