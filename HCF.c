/*
Example: Find HCF of 36 and 60

a = 60, b = 36
→ HCF(60, 36) = HCF(36, 60 % 36)
→ 60 % 36 = 24
→ So, HCF(60, 36) = HCF(36, 24)

Now a = 36, b = 24
→ HCF(36, 24) = HCF(24, 36 % 24)
→ 36 % 24 = 12
→ So, HCF(36, 24) = HCF(24, 12)

Now a = 24, b = 12
→ HCF(24, 12) = HCF(12, 24 % 12)
→ 24 % 12 = 0
→ So, HCF(24, 12) = HCF(12, 0)

When b = 0, HCF = a = 12
*/
#include<stdio.h>
int hcf(int a, int b){
    if( b == 0 )
        return a;
    else{
        return hcf(b, a%b);
    }
}
int main(){
     int num1, num2;
     printf("enter 2 numbers:\n");
     scanf("%d %d", &num1, &num2);
     int result = hcf(num1, num2);
     printf("HCF of %d and %d is %d\n", num1, num2, result);
     return 0;
}