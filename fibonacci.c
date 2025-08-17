// 0, 1, 1, 2, 3, 5, 8......

#include <stdio.h>

void fibonacci_series(int n){
    int a = 0, b = 1, m;
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a);  
        m = a + b;
        a = b;
        b = m;
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    fibonacci_series(n);
    return 0;
}
