#include <stdio.h>

int strLength( char stringArray[], int length ) {
    
    if ( stringArray[length] == '\0' )
        return length;
    else
        strLength( stringArray, ++length );
}

void main() {
	
    char str[50];

    scanf( "%[^\n]", str);
    
    int stringLength = strLength( str, 0 );
    printf("%d", stringLength);
}
