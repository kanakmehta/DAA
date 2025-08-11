#include<stdio.h>
void input_array(int arr[], int n){
    printf("Enter the elements: ");
    for (int i=0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}
void display_array(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int i, j;
void bubbleSort(int arr[], int n){
    for (i = 0; i < n-1; i++){
        int swapped = 0;
        for (j=0; j<n-i-1; j++){
          if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            swapped = 1;
          }
        }
        if (swapped == 0)
        break;
    }
}

int main(){
     int n;
     printf("Enter the no. of elements: ");
     scanf("%d", &n);
     int arr[n];
     input_array(arr, n);
     display_array(arr,n);
     bubbleSort(arr, n);
     printf("sorted array:\n");
     display_array(arr, n);
     return 0;
}
