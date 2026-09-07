#include <stdio.h>

int main() {
    char fullName[50];

    printf("Enter your full name: ");
    scanf(" %[^\n]", fullName);

    printf("Hello,\n\n%s", fullName);

    return 0;
}
