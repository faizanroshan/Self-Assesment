    Author: Roshan Shaik
    Time Stamp : 14 oct 2020
    082 083
    
    
   a. Below 25 - F

   b. 25 to 45 - E

   c. 45 to 50 - D

   d. 50 to 60 - C

   e. 60 to 80 - B

   f. Above 80 - A
*/
  
#include <stdio.h>

float average( int s1, int s2, int s3, int s4, int s5) {

    float sum = s1 + s2 + s3 + s4 + s5;
    float average = (sum/500);

    return average;
}

int main() {
    
    int sub1, subject1, subject2, subject3, subject4, subject5;
    printf("Please enter 5 subject average:\n");
    
    scanf( "%d%d%d%d%d", &subject1, &subject2, &subject3, &subject4, &subject5);
    float avgMark = average(subject1, subject2, subject3, subject4, subject5);
    
    if ( avgMark < 25 )
        printf("Grade F");
        
    else if ( avgMark >= 25 && avgMark < 45 )
        printf("Grade F");
        
    else if ( avgMark >= 45 && avgMark < 50 )
        printf("Grade D");
        
    else if ( avgMark >= 50 && avgMark < 60 )
        printf("Grade C ");
        
    else if ( avgMark >= 60 && avgMark < 80 )
        printf("Grade B");
    else if ( avgMark >=80 )
        printf("Grade A");
        
    
}
