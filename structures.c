#include <stdio.h>
#include <string.h>

// create a structure named 'struct Employee'
// it should have a name, and an age
struct employee_t {
    char name[64];
    int age;
};

int main(int argc, char **argv) {

    // Initialize an employee, name him "Steve"
    // Steve is 42
    struct employee_t steve;
    strncpy(steve.name, "Steve", 64);
    steve.age = 42;

    // print his name and age
    printf("%s, aged %d years\n", steve.name, steve.age);

    return 0;

}