#include <stdio.h>
#include <math.h>

int main() {

    int number, currentDigit, checkNumber, sum = 0;
    
    scanf( "%d", &number);
    checkNumber = number;

    for( ; number != 0; ) {
        
        currentDigit = number % 10;
        sum += pow( currentDigit, 3);
        number = number / 10;
    }

    if( checkNumber == sum ) 
        printf(" %d number is a armstrong number", sum);
    else
        printf(" %d isn't a Armstrong number", sum);
}
