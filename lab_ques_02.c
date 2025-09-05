// Given an array containing n distinct numbers taken from 0, 1, 2, …, n, find the missing one.
#include<stdio.h>
int find_missing_number(int arr[], int n){
    int total = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return total - sum;
}
int main(){
    int n;
    
     printf("Enter the no. of elements (n): ");
     scanf("%d", &n);
     int arr[n];
     printf("Enter the elements of the array:\n");
     for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
     }
     printf("array:");
     for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
     }
     find_missing_number(arr, n);
     printf("\nMissing number is: %d\n", find_missing_number(arr, n));
     

     return 0;
}