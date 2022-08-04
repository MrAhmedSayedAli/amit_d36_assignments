/*
By : Ahmed Elsayed Abdulrahman Ali
Email : mrahmedsayedali@gmail.com
github : https://github.com/MrAhmedSayedAli
*/

#include <stdio.h>


int main() {
    int userNumber,nthBitNumber,toggledNumber;

    printf("Enter Any Number : ");
    scanf("%d", &userNumber);

    //---------------------------------------------------------------->CASE-LOOP-1
    /*
    for (;;) {
        printf("Enter nth bit to toggle (0-31) : ");
        scanf("%d", &nthBitNumber);

        if(nthBitNumber >=0 && nthBitNumber <= 31){
            break;
        }else{
            printf("You Must ");
        }
    }
     */
    //---------------------------------------------------------------->CASE-LOOP-2
    /*
    int breakLoop = 0;
    do {
        printf("Enter nth bit to toggle (0-31) : ");
        scanf("%d", &nthBitNumber);
        if(nthBitNumber >=0 && nthBitNumber <= 31){
            breakLoop = 1;
        }else{
            printf("You Must ");
        }

    } while (breakLoop == 0);
     */
    //---------------------------------------------------------------->CASE-LOOP-3
    while (1){
        printf("Enter nth bit to toggle (0-31) : ");
        scanf("%d", &nthBitNumber);
        if(nthBitNumber >=0 && nthBitNumber <= 31){
            break;
        }else{
            printf("You Must ");
        }
    }
    //---------------------------------------------------------------->Toggled
    toggledNumber = userNumber ^ ( 1 << nthBitNumber );
    printf("Bit Toggled Successfully\n");
    //---------------------------------------------------------------->Printing
    printf("Number Before Toggling 1 bit: %d (in Decimal)\n",userNumber);
    printf("Number After Toggling 1 bit: %d (in Decimal)\n",toggledNumber);



    return 0;
}