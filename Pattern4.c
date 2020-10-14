#include <stdio.h>

void patternMethod1( int inputVal) {
    
    int i, j;
    for ( i = 1; i <= inputVal; i++ ) {
        
        for ( j = inputVal; j > i; j-- ) {
            
            printf(" ");
        }
        
        for( ; j > 0; j--) {
            
            printf("*");
        }
        
        printf("\n");
    }
}

void patternMethod2(int inputVal ) {
    
    int temp = inputVal;
    for ( int i = 1; i <= inputVal; i++ ){
        
        for ( int j = 1; j <= inputVal; j++ ) {
            
            if ( j >= temp ) {
                
                printf("*");
            }
            
            else 
                printf(" ");
        }
        temp--;
        
        printf("\n");
    }
}

int main() {
    
    int input;
    scanf("%d", &input);
    
    patternMethod1(input);
    patternMethod2(input);
}
