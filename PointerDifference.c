  
#include <stdio.h>

void differenceTwoNumbers(int *var1, int *var2) {
    
    int difference = *var1 - *var2;
    
    printf("The difference of two number is %d", difference);   
 
}

int main () {
    
    int num1;
    int num2;

    scanf( "%d%d", &num1, &num2 ); 
    
    int *ptr1;
    int *ptr2;
    
    ptr1 = &num1;
    ptr2 = &num2;
    
    differenceTwoNumbers(ptr1, ptr2);
    

}
