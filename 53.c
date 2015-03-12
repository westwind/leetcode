#include <stdio.h>

int maxSubArray(int A[], int n) {
    int i;
    int max, sum;
    max = A[0];
    sum = 0;
    for (i = 0; i < n; i++) {
        sum += A[i];
        if (sum > max)
            max = sum;
        if(sum < 0)
            sum = 0;
    }
    return max;
}

int main() {
    int A[] = { -3, -2, 0, -1};
    printf("%d\n", maxSubArray(A, 4));

    return 0;
}
