#include <stdio.h>

int main() {
    printf("Pointer : Show the basic declaration of a pointer: \n");
    printf("---------------------------------------------------\n");
    printf("Here is m=10, n and o are two integer variables and *z is an integer\n");
    int m = 10;
    int *z = &m;
    printf("z stores the address of m = %p\n", z);
    printf("*z stores the value of m = %d\n", *z);
    printf("&m stores the address of m = %p\n", &m);
    int n, o;
    printf("&n stores the address of n = %p\n", &n);
    printf("&o stores the address of o = %p\n", &o);
    printf("&z stores the address of z = %p\n", &z);
}