#include<stdio.h>
int largest_element(int arr[], int n){
    
    int largest = arr[0];
    for(int i = 0; i<n; i++){
     if(arr[i]>= largest){
          largest = arr[i];
     }
    }
    return largest;
}
int smallest_element(int arr[], int n){
    
    int smallest = arr[0];
    for(int i = 0; i<n; i++){
     if(arr[i]<= smallest){
          smallest = arr[i];
     }
    }
    return smallest;
}
int main(){
     int num, A[100], result1, result2;
     printf("enter the no. of elements you want in an array:\n");
     scanf("%d", &num);
     printf("Enter %d elements:\n", num);
     for(int i = 0; i < num; i++) {
        scanf("%d", &A[i]);   
     }
     result1 = largest_element(A, num);
     printf("largest element: %d\n", result1);
     result2 = smallest_element(A, num);
     printf("smallest element: %d\n", result2); 
     return 0;
}