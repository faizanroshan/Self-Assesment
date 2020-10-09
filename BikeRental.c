#include <stdio.h>

float calculateRent( float timeRented) {
    
    float price;
    
    if ( timeRented <= 5 ) 
        price = timeRented * 1.25;
        
    else if ( timeRented > 5 && timeRented < 10 ) 
        price = timeRented * 5;
    else 
        price = timeRented * 10;
    
    return price;
}

int main() {
    
    float time;
    scanf("%f", &time);
    
    float payMoney = calculateRent(time);
    printf("The customer needs to pay %f $", payMoney);
}
