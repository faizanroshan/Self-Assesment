#include <stdio.h>

void roundOf( float num ) {

    int integerPart = num;
    int fractionalPart = (num - integerPart) * 10;

    if ( fractionalPart >= 5 ) 
	integerPart++;

    printf( "%d \n", integerPart ); 
}

void main() {

    float number;
    
    printf("Please enter the number: ");
    scanf( "%f", &number);
    
    roundOf(number);
}
