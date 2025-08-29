#include <stdio.h>
#include <math.h>
#include <time.h>

// Function to count digits
int count_digits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

// Approach 1: Using pow()
int isArmstrong_pow(int num) {
    int n = count_digits(num);
    int original = num, remainder;
    double result = 0.0;

    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }
    return (int)result == num;
}

// Approach 2: Custom power function
int powerOfnumber(int x, unsigned int y) {
    int res = 1;
    while (y > 0) {
        if (y & 1) res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}

int isArmstrong_custom(int num) {
    int n = count_digits(num);
    int original = num, remainder;
    int result = 0;

    while (original != 0) {
        remainder = original % 10;
        result += powerOfnumber(remainder, n);
        original /= 10;
    }
    return result == num;
}

int main() {
    int N;
    printf("Enter the upper limit (N): ");
    scanf("%d", &N);

    clock_t start, end;
    double time_pow, time_custom;

    // Approach 1: pow()
    printf("\nArmstrong numbers using pow():\n");
    start = clock();
    for (int i = 1; i <= N; i++) {
        if (isArmstrong_pow(i)) {
            printf("%d ", i);
        }
    }
    end = clock();
    time_pow = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC; // convert to ms
    printf("\nTime taken using pow(): %.3f ms\n", time_pow);

    // Approach 2: Custom power function
    printf("\nArmstrong numbers using custom power function:\n");
    start = clock();
    for (int i = 1; i <= N; i++) {
        if (isArmstrong_custom(i)) {
            printf("%d ", i);
        }
    }
    end = clock();
    time_custom = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC; // convert to ms
    printf("\nTime taken using custom power function: %.3f ms\n", time_custom);

    return 0;
}
