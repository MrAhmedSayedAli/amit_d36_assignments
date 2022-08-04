/*
By : Ahmed Elsayed Abdulrahman Ali
Email : mrahmedsayedali@gmail.com
github : https://github.com/MrAhmedSayedAli
*/

#include <stdio.h>


int main() {

    int userNumber;

    printf("Enter The Number \n");
    scanf("%d", &userNumber);
//---------------------------------------------------------------->TEST'S
    //printf("Test1 output : %d\n",((userNumber / 2) * 2));
    //printf("Test2 output : %d\n",((userNumber & 1) == 0));
//---------------------------------------------------------------->{{ CASE:1 }}
/*
    if((userNumber & 1) == 0){
        printf("The number is odd = 0 \n");
        printf("The number is even = 1 \n");
    }else{
        printf("The number is odd = 1 \n");
        printf("The number is even = 0 \n");
    }
*/
//---------------------------------------------------------------->{{ CASE:2 }}
/*
    int output = (userNumber & 1);
    switch (output) {
        case 0: {
            printf("The number is odd = 0 \n");
            printf("The number is even = 1 \n");
        }
            break;
        case 1: {
            printf("The number is odd = 1 \n");
            printf("The number is even = 0 \n");
        }
            break;
        default:
            printf("Yous Number %d \n", userNumber);
    }
*/
//---------------------------------------------------------------->{{ CASE:3 }}
    printf("The number is odd = %d \n", ((userNumber & 1) == 1));
    printf("The number is even = %d \n", ((userNumber & 1) == 0));
//---------------------------------------------------------------->

    return 0;
}
