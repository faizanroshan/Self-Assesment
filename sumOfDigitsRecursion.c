#include <stdio.h>

int sumOfDigits(int num) {
    
    static int sum = 0;
    
    if( num == 0 )
        return sum;
    else {
        
        sum += num % 10 ;
        num /= 10;
    }
    sumOfDigits(num);
}   

void main() {
	
    int number;
    scanf("%d", &number);
    
    int totalSum = sumOfDigits(number);
	printf("%d", totalSum);

}
