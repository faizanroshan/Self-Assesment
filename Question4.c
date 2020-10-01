#include <stdio.h>

void sumTwoNumbers(int *var1, int *var2) {
    
    int sum = *var1 + *var2;
    
    printf("The sum of two number is %d", sum);   
 
}

int main () {
    
    int num1;
    int num2;

    scanf( "%d%d", &num1, &num2 ); 
    
    int *ptr1;
    int *ptr2;
    
    ptr1 = &num1;
    ptr2 = &num2;
    
    sumTwoNumbers(ptr1, ptr2);
    

}

