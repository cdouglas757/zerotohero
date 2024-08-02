#include <stdio.h>

int main() {
    int first_num, second_num, *fptr, *sptr, sum;

    printf("Pointer : Add two numbers : \n");
    printf("-----------------------------------------------\n\n");

    printf("Input the first number : \n");
    scanf("%d", &first_num);

    printf("Input the second number : \n");
    scanf("%d", &second_num);

    fptr = &first_num;
    sptr = &second_num;

    sum = *fptr + *sptr;

    printf("The sum of the entered numbers is : %d\n", sum);
}