/*
By : Ahmed Elsayed Abdulrahman Ali
Email : mrahmedsayedali@gmail.com
github : https://github.com/MrAhmedSayedAli
*/

#include <stdio.h>


int main() {

    int userNumber;

    printf("Enter The Number \n");
    scanf("%d",&userNumber);


    if((userNumber & 1) == 0){
        printf("The number is odd = 0 \n");
        printf("The number is even = 1 \n");
    }else{
        printf("The number is odd = 1 \n");
        printf("The number is even = 0 \n");
    }

    return 0;
}
