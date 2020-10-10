// print NUmbers from input to 100;
#include <stdio.h>

int printNumbers(int number) {
    
    if( number <= 100 ) {
        printf("%d ", number);
        printNumbers(++number);
    } 
       
} 

int main() {

    int input;
    scanf("%d", &input);
    
    printNumbers(input);
    
}
