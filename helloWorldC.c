#include <stdio.h>

int fibonacci(int n) {
    int prev = 0, curr = 1;
    int i;

    printf("%d\n%d\n", prev, curr);

    for (i = 2; i <= n; i++) {
        int next = prev + curr;
        printf("%d\n", next);
        prev = curr;
        curr = next;
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}