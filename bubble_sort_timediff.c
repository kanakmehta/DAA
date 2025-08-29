#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    clock_t start, end;
    double cpu_time_used;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // generate random numbers
    srand(time(0));
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 10000;  // random number between 0 and 9999
    }

    // Record start time
    start = clock();

    bubbleSort(arr, n);

    // Record end time
    end = clock();

    // Calculate time difference
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Time taken to sort %d elements: %f seconds\n", n, cpu_time_used);

    return 0;
}

