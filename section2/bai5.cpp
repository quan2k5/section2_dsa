#include <stdio.h>
#include <stdlib.h>
void xoaPhanTu(int *arr, int *n, int k) {
    if (k < 0 || k >= *n) {
        printf("khong co phan tu nao\n");
        return;
    }
    for (int i = k; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}
int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    xoaPhanTu(arr, &n, k);
    if (k >= 0 && k < n + 1) {
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    free(arr);
    return 0;
}

