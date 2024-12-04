#include <stdio.h>
#include <stdlib.h>
int *gopMang(int *arr1, int n, int *arr2, int m, int *sizeResult) {
    *sizeResult = n + m;
    int *result = (int *)malloc((*sizeResult) * sizeof(int));
    for (int i = 0; i < n; i++) {
        result[i] = arr1[i];
    }
    for (int i = 0; i < m; i++) {
        result[n + i] = arr2[i];
    }
    return result;
}
int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int *arr1 = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }
    int sizeResult;
    int *result = gopMang(arr1, n, arr2, m, &sizeResult);
    for (int i = 0; i < sizeResult; i++) {
        printf("%d ", result[i]);
    }
    free(arr1);
    free(arr2);
    free(result);
    return 0;
}

