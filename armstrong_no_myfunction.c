#include<stdio.h>
#include<stdlib.h>
int powerOfnumber(int x, unsigned int y){
    int res = 1;
    while(y>0){
        if(y & 1){
            res = res * x;
        }
    y = y >> 1;
    x = x * x;
    }
    return res;
}
int count_numbers(int n){
    int count = 0;
    while (n!=0)
    {
        n /= 10;
        count++;
    }
    return count;
}
int is_armstrong(int num){
    int n = count_numbers(num);
    int original = num, remainder;
    double result = 0.0;
    while (original != 0)
    {
        remainder = original % 10;
        result += powerOfnumber(remainder, n);
        original /= 10;
    }
    return (int)result == num;
}
int main(){
     int number;
     printf("enter the no. you want to check:\n");
     scanf("%d", &number);

     if (is_armstrong(number))
     {
        printf("%d is an armstrong number", number);
     }
     else{
        printf("%d is not an armstrong number", number);
     }
     
     return 0;
}