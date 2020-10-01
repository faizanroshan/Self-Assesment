#include <stdio.h>

float grossSalary(float basicPay) { 

    float TA = basicPay * 0.12;
    float DA = basicPay * 0.10;
    
    float grossSal = basicPay + TA + DA;
    
    return grossSal;
}

void main() {

    float BA;
    printf("Please enter the Basic Salary: ");
    scanf("%f", &BA);
    float totalSalary = grossSalary(BA);
    
    printf("Your gross Salary is : %f \n", totalSalary);
}
