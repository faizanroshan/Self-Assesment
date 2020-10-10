#include <stdio.h>

int recursiveSum(int number) {
    
    if ( number == 1 )
        return 1;
    else 
        return number + recursiveSum(number - 1 );
} 

int main() {

    int input;
    scanf("%d", &input);
    
    int sum = recursiveSum(input);
    printf("%d", sum);
    
}
