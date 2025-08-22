#include<stdio.h>
int remove_duplicates(int arr[], int n){
    if (n==0 || n==1)
    {
        return n;
    }
    int temp[n];  //temp array to store unique elements
    int j = 0; // j = new size of an array
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] != arr[i+1])
        {
            temp[j++] = arr[i];  //The j++ then increments j, moving it to the next available position for the next unique element.
        }
        
    }
    temp[j++] = arr[n-1];
     // Copy the unique elements back to the original array
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    return j; // Return the new size of the array
}
    
int main(){
     int A[] = {1,1,2,2,2,3,4,3,4,5,6};
     int n = sizeof(A) / sizeof(A[0]);
     printf("Original array size: %d\n", n);
    printf("Original array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    n = remove_duplicates(A, n);

    printf("Array size after removing duplicates: %d\n", n);
    printf("Array elements after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}