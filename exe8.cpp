#include <stdio.h>

int main() {
    int N, M, i, j, k;
    
    printf("Enter the size of array A: ");
    scanf("%d", &N);
    
    int tabA[N];
    
    printf("Enter the elements of array A in ascending order:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &tabA[i]);
    }
    
    printf("Enter the size of array B: ");
    scanf("%d", &M);
    
    int tabB[M], tabC[N + M];
    
    printf("Enter the elements of array B in ascending order:\n");
    for (i = 0; i < M; i++) {
        scanf("%d", &tabB[i]);
    }
    
    // Merge arrays A and B into C
    i = j = k = 0;
    while (i < N && j < M) {
        if (tabA[i] < tabB[j]) {
            tabC[k++] = tabA[i++];
        } else {
            tabC[k++] = tabB[j++];
        }
    }
    
    // Copy remaining elements of A, if any
    while (i < N) {
        tabC[k++] = tabA[i++];
    }
    
    // Copy remaining elements of B, if any
    while (j < M) {
        tabC[k++] = tabB[j++];
    }
    
    printf("Merged and sorted array:\n");
    for (i = 0; i < N + M; i++) {
        printf("%d ", tabC[i]);
    }
    
    return 0;
}

