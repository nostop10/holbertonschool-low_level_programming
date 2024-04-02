#include <stlib.h>
#include <stdio.h>
#include <string.h>
#include <lists.h>

size_t print_list(const list_t *h) {
    const list_t *current = h;
    size_t count = 0;

    printf("[");

    while (current != NULL) {
        printf("'%s'", current->str);
        count++;
        if (current->next != NULL) {
            printf(", ");
        }
        current = current->next;
    }

    if (count == 0) {
        printf("[0] (nil)");
    }

    printf("]\n");
    return count;
}






