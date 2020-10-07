#include <stdio.h>

void main() {
    
    int factorial;
    scanf("%d", &factorial);
    
    int factorialVal = 1;
    
    do {
        
        factorialVal *= factorial;
        factorial--;
        
    } while( factorial != 0);
    
    printf("%d", factorialVal);

}
