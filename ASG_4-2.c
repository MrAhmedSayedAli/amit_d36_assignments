/*
By : Ahmed Elsayed Abdulrahman Ali
Email : mrahmedsayedali@gmail.com
github : https://github.com/MrAhmedSayedAli
*/

#include <stdio.h>
#include <string.h>

int main() {

    char string[50] = "i like this program very much";
    char reverseString[50] = "";
    int reverseI = 0;

    int stringLength = strlen(string);
    int lastWord = stringLength-1;

    for (int i = (stringLength - 1); i >= 0; i--) {

        //printf("%c" ,string[i]);
        //printf("%d\n" ,i);

        //WORD BREAK
        if(string[i] == ' ' || i == 0){
            //printf(" { %d } \n",i+1);

            int tWordI = i != 0 ? i+1 : i;

            for (int j = tWordI; j <= lastWord; j++) {
                reverseString[reverseI] = string[j];
                reverseI++;
            }
            lastWord = i;
            reverseString[reverseI] = ' ';
            reverseI++;
            //printf(" -> %d",(stringLength - i - 2));
            //printf("\n");
        }



    }
    //printf("\n");
    //printf("%d\n" ,stringLength);
    printf("String : %s\n" ,string);
    printf("Reverse String : %s" ,reverseString);
    return 0;
}