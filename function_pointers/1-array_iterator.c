#include "function_pointers.h"

/**
 * array_iterator - Exécute une fonction donnée en para�tr
 *                  sur chaque élément d'un tableau.
 * @array: Le tableau.
 * @size: La taille du tableau.
 * @action: Un pointeur vers la fonction à exécuter.
 */
void array_iterator(int *array, size_t size, void (*action)(int));
    {
        action(array[i]);
    }


