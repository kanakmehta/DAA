#include<stdio.h>
#include<math.h>
int count_digits(int n){
    int count = 0;
    while(n != 0){
        n /= 10;  //will remove the last digit eg- 1234/10 = 123
        count++;  //will inc. the no. of count in each loop like it will tell that how many times this loop ran   
    }
    return count;
}
int isArmstrong(int num){
    int n = count_digits(num);
    int original = num, remainder;
    double result = 0.0; ;  // initialize the no. by 0 to add on the value
    while (original != 0)
    {
        remainder = original % 10;   // extract last digit of the number
        result += pow(remainder, n);  // make the no of digits to the power
        original /= 10;   // removes each digit

    }
    return (int)result == num;
}
int main(){
     int number;
     printf("enter the no. you want to check:\n");
     scanf("%d", &number);

     if (isArmstrong(number))
     {
        printf("%d is an armstrong number", number);
     }
     else{
        printf("%d is not an armstrong number", number);
     }
     
     return 0;
}