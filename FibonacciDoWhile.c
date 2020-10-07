void main() {
    
    int number, f3;
    printf("please enter the number of Fibonacci numbers: \n");
    scanf("%d", &number);
    
    number = number - 2; // As we are printing first two fibonnaci; 
    
    int f1 =0;
    int f2 = 1;
    printf( "%d\n%d\n", f1, f2);
    
    do {
        
        f3 = f1 + f2;
        printf( "%d \n", f3);
        f1 = f2;
        f2 = f3;

    }  while(--number);

}

