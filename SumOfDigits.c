#include <stdio.h>

int main() {

    int input;
    
    scanf( "%d", &input );
    int sum = 0;

    while ( input != 0 ) {
        
        int remainder = input % 10;
        input = input / 10;
        
        sum += remainder;
    }
    
    printf( "The sum of the digits is %d", sum);
}
