/*
By : Ahmed Elsayed Abdulrahman Ali
Email : mrahmedsayedali@gmail.com
github : https://github.com/MrAhmedSayedAli
*/

#include <stdio.h>


int main(){

    int firstNumber, secondNumber,resultNumber;
    char operator;

    printf("Enter First Number : ");
    scanf("%d", &firstNumber);

    //FIX -_-
    printf("Enter The Operator (+_-_/_*): ");
    while(1) {
        scanf("%c", &operator);
        if(operator == '+' || operator == '-' || operator == '/' || operator == '*'){
            break;
        }
    }

    printf("Enter Second Number : ");
    scanf("%d", &secondNumber);




    switch (operator) {
        case '+':{
            resultNumber = firstNumber+secondNumber;
        }
            break;
        case '-':{
            resultNumber = firstNumber-secondNumber;
        }
            break;
        case '*':{
            resultNumber = firstNumber*secondNumber;
        }
            break;
        case '/':{
            resultNumber = firstNumber/secondNumber;
        }
            break;
        default:
            printf("Error :/");
            return 0;
    }


    printf("Result Number is : %d",resultNumber);
    return 0;
}
