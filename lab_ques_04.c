// Given an integer n, return true if it is a power of two.
#include<stdio.h>
int power_of_two(int n){
     if(n <= 0){
          return 0;
     }
     while (n > 1){
          if(n % 2 != 0){
               return 0;
          }
          n = n/ 2;
     }
     return 1;
}
int main(){
     int n;
     printf("Enter an integer: ");
     scanf("%d", &n);   
     power_of_two(n);
     if(power_of_two(n)){
          printf("%d is a power of two.\n", n);
     }
     else{
          printf("%d is not a power of two.\n", n);
     }
     return 0;
}