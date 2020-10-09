#include <stdio.h>

int main() {
    
        
        int row = 1, reverseRow;
        
        int matrixSize;
        scanf("%d", &matrixSize);
        
        int temp = matrixSize;
        
        for ( int i = 1 ; i <= (matrixSize / 2) + 1; i++ ) {
            
            while ( temp-- ) {
                printf("%d ", row++ );
            }
            
            // Edge case when the matrix is input is odd
            if( i == (matrixSize / 2) + 1) {
                break;
            }
            
            // Updating the values for reverseRow iterations
            temp = matrixSize;
            reverseRow = row - 1;
            
            // Making reverseRow.
            printf("\n"); 
            while ( temp-- ) {
                
                printf( "%d ", reverseRow-- );
            }
             
            temp = matrixSize;
            row = reverseRow + matrixSize + 1;
            printf("\n");
        }

}
