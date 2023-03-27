#include <stdio.h>

#define MAX_DEGREE 101

int multiply_polynomials(int A[], int B[], int C[], int m, int n) {
    for (int i = 0; i <= m + n; i++) {
        C[i] = 0;
    }
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            C[i + j] += A[i] * B[j];
        }
    }
    return m + n;
}

int main() {
    int A[MAX_DEGREE], B[MAX_DEGREE], C[MAX_DEGREE];
    int m, n, i;

    printf("다항식 A의 차수를 입력하세요: ");
    scanf_s("%d", &m);
    printf("다항식 A의 각 항의 계수를 고차항부터 하나씩 입력하세요: ");
    for (i = m; i >= 0; i--) {
        scanf_s("%d", &A[i]);
    }

    printf("다항식 B의 차수를 입력하세요: ");
    scanf_s("%d", &n);
    printf("다항식 B의 각 항의 계수를 고차항부터 하나씩 입력하세요: ");
    for (i = n; i >= 0; i--) {
        scanf_s("%d", &B[i]);
    }

    int degree = multiply_polynomials(A, B, C, m, n);

    printf("다항식 A와 B의 곱:\n");
    for (i = degree; i >= 0; i--) {
        printf("%d ", C[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}