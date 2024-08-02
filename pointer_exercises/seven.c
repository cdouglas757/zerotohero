#include <stdio.h>

int main() {
    int array_size;
    printf("Pointer : Print an array by pointer: \n");
    printf("-----------------------------------------------\n\n");

    printf("Input the number of elements to store in the array : \n");
    scanf("%d", &array_size);

    int input_elements[array_size];

    for(int i = 0; i < array_size; i++) {
        printf("element - %d : ", i);
        scanf("%d", input_elements + i);
        printf("\n");
    }

    printf("\nThe elements you entered are : \n");

    for(int i = 0; i < array_size; i++) {
        printf("element - %d : %d\n", i, *(input_elements + i));
    }
}