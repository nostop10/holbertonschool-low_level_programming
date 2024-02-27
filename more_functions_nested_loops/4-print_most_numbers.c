#include "main.h"
#include <stdio.h>

void print_most_numbers(void) {
    char chiffres[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int i;

    for (i = 0; i < 10; i++) {
        if (chiffres[i] != '2' && chiffres[i] != '4') {
    _putchar(chiffres[i]);
        }
    }

    _putchar('\n');
}

int main() {
    print_most_numbers();
    return 0;
}
