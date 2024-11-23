#include <stdio.h>

int temp[10], k = 0;

void topologicalSort(int n, int indegree[], int adj[10][10]) {
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            indegree[i] = -1; // Mark as processed
            temp[++k] = i;
            for (int j = 1; j <= n; j++)
                if (adj[i][j] == 1) indegree[j]--;
            i = 0; // Restart to handle updates
        }
    }
}

int main() {
    int n, indegree[10] = {0}, adj[10][10];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &adj[i][j]);
            if (adj[i][j] == 1) indegree[j]++;
        }

    topologicalSort(n, indegree, adj);

    if (k != n)
        printf("Topological ordering is not possible (Graph has a cycle).\n");
    else {
        printf("Topological Order: ");
        for (int i = 1; i <= k; i++)
            printf("v%d ", temp[i]);
    }

    return 0;
}
