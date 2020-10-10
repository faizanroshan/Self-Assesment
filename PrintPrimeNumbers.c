#include <stdio.h>

void main() {
    
    int input;
    scanf("%d", &input );
    int flag  = 1;
    
    for ( int j = 2; j <= input; j++  ) {
        
        for ( int i = 2; i <= j/2; i++ ) {
            
            flag = 1;
            
            if ( j % i == 0 ) {
            
                flag = 0;
                break;
            }
        } 
        
        if ( flag == 1 ) 
            printf( "%d ", j );

    }
    
    
}
