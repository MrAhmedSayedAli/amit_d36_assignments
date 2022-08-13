/*
By : Ahmed Elsayed Abdulrahman Ali
Email : mrahmedsayedali@gmail.com
github : https://github.com/MrAhmedSayedAli
*/

#include <stdio.h>

#define toggle(a, b) (a ^ b)
void swap(int *x, int *y);

int main() {

    int firstNumber, secondNumber;

    printf("Enter First Number X : ");
    scanf("%d", &firstNumber);


    printf("Enter Second Number Y : ");
    scanf("%d", &secondNumber);

    swap(&firstNumber, &secondNumber);

    printf("X = %d   Y = %d",firstNumber,secondNumber);

}

void swap(int *x, int *y){


    //printf("Debug = %d\n",toggle(*x,*y));
    *x = toggle(*x,*y);
    //printf("Debug = %d\n",toggle(*x,*y));
    *y = toggle(*x,*y);
    //printf("Debug = %d\n",toggle(*x,*y));
    *x = toggle(*x,*y);
    //printf("Debug = %d\n",toggle(*x,*y));
}