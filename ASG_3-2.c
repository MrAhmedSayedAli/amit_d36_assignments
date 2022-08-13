/*
By : Ahmed Elsayed Abdulrahman Ali
Email : mrahmedsayedali@gmail.com
github : https://github.com/MrAhmedSayedAli
*/

//References :(https://en.wikipedia.org/wiki/Fibonacci_number)

#include <stdio.h>

int fibonacciSequence(int number);

int main() {

    int userNumber,tempNumber = 0;

    printf("Enter The Number Of Terms: ");
    scanf("%d", &userNumber);


    printf("Fibonacci series : ");
    for ( int i = 1 ; i <= userNumber ; i++ )
    {
        printf("%d, ", fibonacciSequence(tempNumber));
        tempNumber++;
    }
    return 0;
}


int fibonacciSequence(int number){

    //ALGORITHM = F.0 = 0
    //ALGORITHM = F.1 = 1
    //ALGORITHM = F.n = F.n-1 + F.n-2
    switch (number) {
        case 0:
            return 0;
        case 1 :
            return 1;
        default:
            return ( fibonacciSequence(number-1) + fibonacciSequence(number-2) );
    }
}