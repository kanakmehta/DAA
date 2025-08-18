#include<stdio.h>
void swap(int *a, int *b){
     int temp;
     temp = *a;
     *a = *b;
     *b = temp;
}
int main(){
     int x, y;
     printf("enter the first no. :\n");
     scanf("%d", &x);
     printf("enter the second no. :\n");
     scanf("%d", &y);
     printf("the numbers are:\n%d and %d\n", x, y);
     swap(&x,&y);
     printf("no. after swapping:\n%d and %d\n", x, y);
     return 0;
}