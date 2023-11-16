#include <stdio.h>  
  
int main() {  
    int num1, num2, sum, product;  
  
    printf("Input the first integer: ");  
    scanf("%d", &num1);  
  
    printf("Input the second integer: ");  
    scanf("%d", &num2);  
  
    sum = num1 + num2;  
    product = num1 * num2;  
  
    printf("Sum of the two integers %d and %d = %d\n", num1, num2, sum);  
    printf("Product of the two integers %d and %d = %d\n", num1, num2, product);  
  
    return 0;  
}