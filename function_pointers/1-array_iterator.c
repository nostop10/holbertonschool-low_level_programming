#include "function_pointers.h"
/**
 * array_iterator - Exécute une fonction donnée en rametre
 *sur chaque élément d'un tableau.
 * @array: Le tableau.
 * @size: La taille du tableau.
 * @action: Un pointeur vers la fonction à exécuter.
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
 if (array == NULL || action == NULL)
        return;

    for (size_t i = 0; i < size; i++)
    {
        action(array[i]);
    }
}

