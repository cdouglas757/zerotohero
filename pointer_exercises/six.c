#include <stdio.h>

int main() {
    int first_num, second_num, *fptr = &first_num, *sptr = &second_num, max;

    printf("Pointer : Find the max of two numbers using a pointer: \n");
    printf("-----------------------------------------------\n\n");

    printf("Input the first number : \n");
    scanf("%d", &first_num);

    printf("Input the second number : \n");
    scanf("%d", &second_num);

    if(*fptr > *sptr) {
        max = *fptr;
    } else {
        max = *sptr;
    }

    printf("The max of the entered numbers is : %d\n", max);
}