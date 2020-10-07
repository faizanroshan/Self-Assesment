#include <stdio.h>

void main() {
    
    int factorial, factorialVal;
    
    factorialVal = 1;
    
    scanf("%d", &factorial);
    
    while(factorial != 0 ) {
        
        factorialVal *= factorial;
        factorial--;
    }
    
    printf( "The factorial value is %d", factorialVal);
}
