// Given an n x n matrix, rotate it by 90 degrees clockwise in place without using extra memory.
#include<stdio.h>
void rotate_matrix(int n, int matrix[n][n]){
    for(int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}
void reverse_rows(int n, int matrix[n][n]){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j< n/2; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n-j-1];
            matrix[i][n-j-1] = temp;
        }
    }
}
void print_matrix(int n, int matrix[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main(){
     int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++){ 
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Original Matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j<n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    rotate_matrix(n, matrix);
    reverse_rows(n, matrix);
    printf("Rotated Matrix by 90 degrees clockwise:\n");
    print_matrix(n, matrix);

     return 0;
}