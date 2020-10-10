#include <stdio.h>

long int factorialRecursion(int number) {
    
    if( number == 0 || number == 1 ) 
        return 1;
    else
        return number * factorialRecursion(number - 1);
       
} 

int main() {

    int input;
    scanf("%d", &input);
    
    long int val = factorialRecursion(input);
    printf( "%ld", val);
}
