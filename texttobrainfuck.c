#include <stdlib.h>
#include <stdio.h>

int main(){
    char input;
    int intInput, intInput2, temp1 = 0, shortened;
    int counter = 0;
    while(scanf("%c", &input) != EOF) {
        intInput = (int)input;
        intInput2 = intInput;
        counter++;
        if (intInput < 10 && counter == 1) {
            printf("Invalid Input\n");
            break;
        }
        temp1 = intInput/10;
        if (temp1 > 0) {
            printf(">");
        }
        for (int i = 0; temp1 > i; i++) {
            printf("+");
            shortened = 1;
        }
        if (shortened) {
            printf("[");
            printf("<");
        }
        if (shortened) {
            for (int i = 0; 10 > i; i++) {
                printf("+");
            }
        }
        if (shortened) {
            printf(">");
            printf("-");
            printf("]");
            printf("<");
            intInput = intInput - temp1*10;
        }
        for (int i = 0; intInput > i; i++) {
            printf("+");
        }
        printf(".");
        printf(">");
        if (intInput2==10) {
            printf("\n");
        }
    }
    return 0;
}
