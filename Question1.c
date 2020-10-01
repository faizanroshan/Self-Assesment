#include <stdio.h>

void average( int s1, int s2, int s3, int s4, int s5) {

    float sum = s1 + s2 + s3 + s4 + s5;
    float percentage = (sum/500)  * 100;

    printf( "total = %f \n percentage =  %f \n", sum, percentage );
}

int main() {
    
    int sub1, subject1, subject2, subject3, subject4, subject5;
    printf("Please enter 5 subject average:\n");
    scanf( "%d%d%d%d%d", &subject1, &subject2, &subject3, &subject4, &subject5);
    average(subject1, subject2, subject3, subject4, subject5);

}

