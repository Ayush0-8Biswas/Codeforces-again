# include <stdio.h>

int subAsum(int A[], int i, int j);
void subAprint(int A[], int i, int j);

int main(void) {
    int n, A[20];
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter the array: ");
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);

    int maxSum = -100000000;
    for (int i = 0; i < n; i++) {
        // Compute the maximum subarray sum
        for (int j = i + 1; j < n; j++) {
            int sum = subAsum(A, i, j);
            if (sum > maxSum) maxSum = sum;
        }
    }

    printf("Largest sum = %d\n", maxSum);
    printf("Sub-arrays = ");
    for (int i = 0; i < n; i++) {
        // Print the subarrays whose sum is max sum 
        for (int j = 0; j < n; j++) {
            int sum = subAsum(A, i, j);
            if (sum == maxSum) subAprint(A, i, j);
        }
    }
}

void subAprint(int A[], int i, int j) {
    // Function to print subarray A
    printf("(");
    while (i <= j) {
        printf("%d ", A[i++]);
    }
    printf(")");
    printf(", ");
}

int subAsum(int A[], int i, int j) {
    // Function to calculate the sum of subarray
    int sum = 0;
    while (i <= j) {
        sum += A[i++];
    }
    return sum;
}