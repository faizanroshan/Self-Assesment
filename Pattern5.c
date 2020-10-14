/*

*****
 ****
  ***
   **
    *


*/
#include <stdio.h>

void patternMethod1( int inputVal) {
    
    int i, j;
    for ( i = inputVal; i > 0; i-- ) {
        
        for ( j = inputVal; j > i; j-- ) {
            
            printf(" ");
        }
        
        for( ; j > 0; j--) {
            
            printf("*");
        }
        
        printf("\n");
    }
}

int main() {
    
    int input;
    scanf("%d", &input);
    
    patternMethod1(input);

}
