#include<stdio.h>
void insertion_sort(int arr[], int n){
    int temp;
    
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main(){
    int n, A[100];
     printf("Enter the no. of elements you want in an array\n");
     scanf("%d", &n);
     printf("insert the elements in an array:\n");
     for (int i = 0; i < n; i++)
     {
        scanf("%d", &A[i]);
     }
     insertion_sort(A, n);
     printf("Sorted numbers:\n");
     for (int i = 0; i < n; i++)
     {
        printf("%d ", A[i]);
     }
     
     return 0;
}