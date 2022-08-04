/*
By : Ahmed Elsayed Abdulrahman Ali
Email : mrahmedsayedali@gmail.com
github : https://github.com/MrAhmedSayedAli
*/

#include <stdio.h>


int main() {

    int userNumber,tempNumber,remainderNumber;
    int resultNumber = 0;

    printf("Enter The Number : ");
    scanf("%d", &userNumber);

    //References :(https://en.wikipedia.org/wiki/Narcissistic_number)
    //(0,1,153,370,371,407)
    //------------------------------>TESTS
    /*
    printf("TEST -> %d \n",userNumber%10);
    printf("TEST -> %d \n",userNumber/=10);
    printf("TEST -> %d \n",userNumber%10);
    printf("TEST -> %d \n",userNumber/=10);
    printf("TEST -> %d \n",userNumber%10);
    return 0;
     */
    //------------------------------>

    tempNumber = userNumber;
    while (tempNumber > 0) {
        remainderNumber = tempNumber%10;
        resultNumber += remainderNumber*remainderNumber*remainderNumber;
        tempNumber /= 10;
    }
    //printf("%d Result\n", resultNumber);
    if(userNumber == resultNumber){
        printf("%d Armstrong Number", userNumber);
        return 0;
    }
    printf("%d not Armstrong", userNumber);
    return 0;
}
