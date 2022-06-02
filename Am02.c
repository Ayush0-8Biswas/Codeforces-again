# include <stdio.h>

int maxAlphaValue(int S[], int n);

int main(void) {
    int n, A[100];
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter array s[]: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("max alpha: %d", maxAlphaValue(A, n));
}

int maxAlphaValue(int S[], int n) {
    int maxAlpha = 0;
    for (int i = 0; i < n; i++) {
        int thisAlpha = 0;
        for (int k = 0; k < i; k++) {
            if (S[i]%S[k] == 0) thisAlpha++;
        }
        if (thisAlpha > maxAlpha) maxAlpha = thisAlpha;
    }
    return maxAlpha;
}