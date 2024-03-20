#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printMessage(const char *name) {
    printf("Hello, my name is %s\n", name);
}

void printUppercaseMessage(const char *name) {
    char uppercaseName[strlen(name) + 1];
    for (int i = 0; name[i] != '\0'; i++) {
        uppercaseName[i] = toupper(name[i]);
    }
    uppercaseName[strlen(name)] = '\0';
    printf("Hello, my uppercase name is %s\n", uppercaseName);
}

int main() {
    char name[] = "Bob";
    printMessage(name);
    printUppercaseMessage(name);
    return 0;
}
