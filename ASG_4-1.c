/*
By : Ahmed Elsayed Abdulrahman Ali
Email : mrahmedsayedali@gmail.com
github : https://github.com/MrAhmedSayedAli
*/

#include <stdio.h>

void edit(int *x);

int main(){


    //Store these numbers [5,20,80] inside x without overwriting. then print them   { مش فاهمها :/ }
    int userNumber;

    printf("Enter The Value Of X : ");
    scanf("%d", &userNumber);

    printf("Before Calling Edit x = %d\n", userNumber);

    edit(&userNumber);

    printf("After Calling Edit x = %d\n", userNumber);



    return 0;
}

void edit(int *x){
    *x= *x +1;
}