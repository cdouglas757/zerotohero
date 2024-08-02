#include <stdio.h>

long sum_reference(long *a, long *b) {
    return *a + *b;
};

int main() {
    long first_num, second_num, sum;

    printf("Pointer : Add two numbers using call by reference : \n");
    printf("-----------------------------------------------\n\n");

    printf("Input the first number : \n");
    scanf("%ld", &first_num);

    printf("Input the second number : \n");
    scanf("%ld", &second_num);

    sum = sum_reference(&first_num, &second_num);

    printf("The sum of %ld and %ld is : %ld\n", first_num, second_num, sum);
}