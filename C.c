#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);

    int* results = (int*)malloc(T * sizeof(int));

    if (results == NULL) {
        printf("Alokasi memori gagal\n");
        return 1;
    }

    for (int i = 0; i < T; i++) {
        int A, B;
        scanf("%d %d", &A, &B);

        if (A > B) {
            results[i] = 1;
        } else if (B > A) {
            results[i] = 2;
        } else {
            results[i] = 0;
        }
    }

    for (int i = 0; i < T; i++) {
        printf("Case #%d: ", i + 1);
        if (results[i] == 1) {
            printf("Go-Jo\n");
        } else if (results[i] == 2) {
            printf("Bi-Pay\n");
        } else {
            printf("Both\n");
        }
    }

    free(results);
    return 0;
}
