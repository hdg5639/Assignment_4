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

    printf("���׽� A�� ������ �Է��ϼ���: ");
    scanf_s("%d", &m);
    printf("���׽� A�� �� ���� ����� �����׺��� �ϳ��� �Է��ϼ���: ");
    for (i = m; i >= 0; i--) {
        scanf_s("%d", &A[i]);
    }

    printf("���׽� B�� ������ �Է��ϼ���: ");
    scanf_s("%d", &n);
    printf("���׽� B�� �� ���� ����� �����׺��� �ϳ��� �Է��ϼ���: ");
    for (i = n; i >= 0; i--) {
        scanf_s("%d", &B[i]);
    }

    int degree = multiply_polynomials(A, B, C, m, n);

    printf("���׽� A�� B�� ��:\n");
    for (i = degree; i >= 0; i--) {
        printf("%d ", C[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}