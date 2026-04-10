#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 100

// Edge structure
typedef struct {
    int v, w;
} Edge;

// Adjacency list
typedef struct {
    Edge edges[1000];
    int size;
} AdjList;

AdjList graph[MAX];

// Min Heap Node
typedef struct {
    int node, dist;
} HeapNode;

HeapNode heap[10000];
int heapSize = 0;

// Swap
void swap(int i, int j) {
    HeapNode temp = heap[i];
    heap[i] = heap[j];
    heap[j] = temp;
}

// Push into heap
void push(int node, int dist) {
    heap[++heapSize] = (HeapNode){node, dist};
    int i = heapSize;

    while (i > 1 && heap[i].dist < heap[i/2].dist) {
        swap(i, i/2);
        i /= 2;
    }
}

// Pop min
HeapNode pop() {
    HeapNode top = heap[1];
    heap[1] = heap[heapSize--];

    int i = 1;
    while (1) {
        int smallest = i;
        int left = 2*i, right = 2*i + 1;

        if (left <= heapSize && heap[left].dist < heap[smallest].dist)
            smallest = left;
        if (right <= heapSize && heap[right].dist < heap[smallest].dist)
            smallest = right;

        if (smallest == i) break;

        swap(i, smallest);
        i = smallest;
    }

    return top;
}

// Dijkstra function
void dijkstra(int n, int src) {
    int dist[MAX];

    // Initialize distances
    for (int i = 0; i < n; i++)
        dist[i] = INT_MAX;

    dist[src] = 0;
    push(src, 0);

    while (heapSize > 0) {
        HeapNode cur = pop();
        int u = cur.node;

        if (cur.dist > dist[u]) continue;

        for (int i = 0; i < graph[u].size; i++) {
            int v = graph[u].edges[i].v;
            int w = graph[u].edges[i].w;

            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                push(v, dist[v]);
            }
        }
    }

    // Print result
    printf("Shortest distances from source %d:\n", src);
    for (int i = 0; i < n; i++) {
        if (dist[i] == INT_MAX)
            printf("Node %d: INF\n", i);
        else
            printf("Node %d: %d\n", i, dist[i]);
    }
}

// Main function
int main() {
    int n = 5; // number of nodes

    // Initialize graph
    for (int i = 0; i < n; i++)
        graph[i].size = 0;

    // Add edges (u -> v, weight)
    graph[0].edges[graph[0].size++] = (Edge){1, 10};
    graph[0].edges[graph[0].size++] = (Edge){4, 5};
    graph[1].edges[graph[1].size++] = (Edge){2, 1};
    graph[4].edges[graph[4].size++] = (Edge){1, 3};
    graph[4].edges[graph[4].size++] = (Edge){2, 9};
    graph[2].edges[graph[2].size++] = (Edge){3, 4};
    graph[3].edges[graph[3].size++] = (Edge){0, 7};

    dijkstra(n, 0);

    return 0;
}